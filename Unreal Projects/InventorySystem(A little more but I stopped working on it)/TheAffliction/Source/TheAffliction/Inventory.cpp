// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"
#include "InventoryDataStructure.h"
#include "PlayerCharacter.h"
#include "Item.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	Inventory = new InventoryDataStructure;
	Player = Cast<APlayerCharacter>(GetOwner());
	for (int i = 0; i < 10; i++)
	{
		EquippedItems[i] = NULL;
	}
	InventoryNumberToUse = 1;
}


// Called when the game starts
void UInventory::BeginPlay()
{
	Super::BeginPlay();
	Inventory->SetMaxInventorySize(Player->GetInventorySize());
}

//Tells the inventory to add an item to the Data Structure
int32 UInventory::AddItem(AItem* ItemToAdd)
{
	int32 InventorySlotOut = -1;
	if (Inventory->GetNumberOfItems() == 0)
	{
		InventorySlotOut = FindNextEmptyInventorySlot();
		Inventory->AddItem(ItemToAdd, InventorySlotOut);
		UE_LOG(LogTemp, Warning, TEXT("There is nothing in the inventory, just gonna add something to it"));
		return InventorySlotOut;
	}
	if (ItemToAdd->GetIsStackable())
	{
		TArray<ItemNode*> ItemsOfType;
		if (Inventory->FindItemByType(ItemToAdd->GetType(), &ItemsOfType))
		{
			for (int i = 0; i < ItemsOfType.Num(); i++)
			{
				if (ItemsOfType[i]->Data->GetName().ToString() == ItemToAdd->GetName().ToString())
				{
					if (ItemsOfType[i]->Data->GetAmountOfRoom() != 0)
					{
						int32 AmountToChange = ItemsOfType[i]->Data->GetAmountOfRoom() - ItemToAdd->GetAmount();
						if (AmountToChange == 0)
						{
							ItemsOfType[i]->Data->ChangeAmount(ItemsOfType[i]->Data->GetAmountOfRoom());
							ItemToAdd->Destroy();
							UE_LOG(LogTemp, Warning, TEXT("Added just the right amount, item should be destroyed"));
							return -2;
						}
						else if (AmountToChange < 0)
						{
							ItemToAdd->ChangeAmount(-ItemsOfType[i]->Data->GetAmountOfRoom());
							ItemsOfType[i]->Data->ChangeAmount(ItemsOfType[i]->Data->GetAmountOfRoom());
							UE_LOG(LogTemp, Warning, TEXT("Adding another item to the inventory if there is room"));
							return -3;
						}
						else if (AmountToChange > 0)
						{
							ItemsOfType[i]->Data->ChangeAmount(ItemToAdd->GetAmount());
							ItemToAdd->Destroy();
							UE_LOG(LogTemp, Warning, TEXT("Couldn't completely fill used up the item, Destroying it"));
							return -2;
						}
					}
				}
			}
		}
		if (Inventory->GetNumberOfItems() < Player->GetInventorySize())
		{
			InventorySlotOut = FindNextEmptyInventorySlot();
			Inventory->AddItem(ItemToAdd, InventorySlotOut);
			UE_LOG(LogTemp, Warning, TEXT("Item wasnt stackable, adding it to the inventory if there is room"));
			return InventorySlotOut;
		}
	}
	if (Inventory->GetNumberOfItems() < Player->GetInventorySize())
	{
		InventorySlotOut = FindNextEmptyInventorySlot();
		Inventory->AddItem(ItemToAdd, InventorySlotOut);
		return InventorySlotOut;
	}
	return InventorySlotOut;
}

//Tells the inventory to remove an item from Data Structure
void UInventory::RemoveItem(int32 ItemToRemoveSlotNumber)
{
	Inventory->RemoveItem(ItemToRemoveSlotNumber);
}

//Prints a UE LOG for every item in the Inventory
void UInventory::ListItems() const
{
	if (GetNumberOfItems() == 0) //If there are no Items we can jump out because there will be nothing to list
	{
		return;
	}
	for (int i = 1; i <= GetNumberOfItems(); i++) // Loop throught the list of items and print out each item in the list
	{
		auto Current = Inventory->FindItem(i);
		if (Current == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("There is no item in slot: %i"), i);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Item at slot %i: %s\nThere are %i available"), i, *Current->Data->GetType().ToString(), Current->Data->GetAmount());
		}
	}
}

int32 UInventory::GetNumberOfItems() const
{
	return Inventory->GetNumberOfItems();
}

int32 UInventory::FindNextEmptyInventorySlot()//Find the next open Inventory Slot and puts the new item to add there
{
	if (GetNumberOfItems() == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= GetNumberOfItems(); i++)
		{
			auto Current = Inventory->FindItem(i);
			if (Current == nullptr)// if Find item returns a nullptr then there is nothing in that inventory slot, and can safely say this the next useable inventory slot
			{
				UE_LOG(LogTemp, Warning, TEXT("Hey I found an empty inventory slot"));
				return i;
			}
			else if (Current->NextItem == nullptr && i < GetNumberOfItems()) 
			{
				UE_LOG(LogTemp, Warning, TEXT("Guess the Tail of the list is a slot in the middle"));
				continue;
			}
			else if (i == GetNumberOfItems())
			{
				UE_LOG(LogTemp, Warning, TEXT("hey i am adding one to the Inventory Number to use"));
				return i + 1;
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("THIS SHOULDNT EVER HAPPEN"));
	return 1;
}

AItem* UInventory::FindItem(int32 InventorySlot)
{
	return Inventory->FindItem(InventorySlot)->Data;
}

void UInventory::SwapItems(int32 InventorySlotA, int32 InventorySlotB)
{
	ItemNode* A = Inventory->FindItem(InventorySlotA);
	ItemNode* B = Inventory->FindItem(InventorySlotB);
	int32 TempInventorySlot = A->InventorySlot;
	A->InventorySlot = B->InventorySlot;
	B->InventorySlot = TempInventorySlot;
	return;
}

AItem* UInventory::ChangeItemsInventorySlot(int32 InventorySlotOfItem, int32 NewInventorySlot)
{
	ItemNode* ItemToChangeSlotOf = Inventory->FindItem(InventorySlotOfItem);
	AItem* DataToPassOn = ItemToChangeSlotOf->Data;
	Inventory->RemoveItem(InventorySlotOfItem);
	Inventory->AddItem(DataToPassOn, NewInventorySlot);
	return DataToPassOn;
}