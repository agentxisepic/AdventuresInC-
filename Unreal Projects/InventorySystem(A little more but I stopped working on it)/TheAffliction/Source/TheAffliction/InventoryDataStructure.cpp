// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryDataStructure.h"
#include "Item.h"

InventoryDataStructure::InventoryDataStructure()
{
	head = nullptr;
	tail = nullptr;
	NumberOfItems = 0;
}

InventoryDataStructure::~InventoryDataStructure()
{
	
}

//Adds an Item to the linked list and fills it with the appropriate Data. Data to use is handled by the Inventory Component
void InventoryDataStructure::AddItem(AItem* Data, int32 InventorySlotToUse)
{
	auto temp = new ItemNode;
	temp->Data = Data;
	temp->InventorySlot = InventorySlotToUse;
	temp->NextItem = nullptr;
	temp->LastItem = nullptr;
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->NextItem = temp;
		temp->LastItem = tail;
		tail = tail->NextItem;
	}
	NumberOfItems++;
	UE_LOG(LogTemp, Warning, TEXT("Item added: %i"), temp->InventorySlot);
}

ItemNode* InventoryDataStructure::FindItem(int32 GotoInventorySlot)//Loops through the list of items until it finds what it is looking for or doesn't
{
	ItemNode* Temp = head;
	for (int i = 0; i <= MaxInventorySize; i++)
	{
		if (Temp->InventorySlot == GotoInventorySlot)
		{
			return Temp;
		}
		else if (Temp->NextItem != nullptr)
		{
			Temp = Temp->NextItem;
		}
	}
	return nullptr;
}

bool InventoryDataStructure::FindItemByType(FText Type, TArray<ItemNode*>* VectorOfItemsOut)
{
	bool bFoundItem = false;
	for (int i = 0; i <= MaxInventorySize; i++)
	{
		ItemNode* temp = FindItem(i);
		if (!temp) { continue; }
		if (temp->Data->GetType().ToString() == Type.ToString())
		{
				VectorOfItemsOut->Add(temp);
				bFoundItem = true;
		}
	}
	return bFoundItem;
}

void InventoryDataStructure::RemoveItem(int32 InventorySlot)//Asks the Inventory to remove an Item. Returns if there is nothing in the list or there is no Item in the requested inventory slot
{
	if (head == nullptr) { return; }
	ItemNode* ItemToRemove = FindItem(InventorySlot);
	if (ItemToRemove == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("ITS RETURNING A NULLPTR"));
		return;
	}
	//adelete ItemToRemove->Data;
	if (ItemToRemove == head)
	{
		if (ItemToRemove->NextItem == nullptr)
		{
			head = nullptr;
			tail = nullptr;
			NumberOfItems = 0;
			delete ItemToRemove;
			return;
		}
		else
		{
			head = ItemToRemove->NextItem;
			ItemToRemove->NextItem->LastItem = nullptr;
			NumberOfItems--;
			delete ItemToRemove;
			return;
		}
		
	}
	else if (ItemToRemove == tail)
	{
		ItemToRemove->LastItem->NextItem = nullptr;
		tail = ItemToRemove->LastItem;
		NumberOfItems--;
		delete ItemToRemove;
		return;
	}
	else
	{
		ItemToRemove->LastItem->NextItem = ItemToRemove->NextItem;
		ItemToRemove->NextItem->LastItem = ItemToRemove->LastItem;
		delete ItemToRemove;
		NumberOfItems--;
	}
}

int32 InventoryDataStructure::GetNumberOfItems() const
{
	return NumberOfItems;
}

void InventoryDataStructure::SetMaxInventorySize(int32 MaxNumberOfItems)
{
	MaxInventorySize = MaxNumberOfItems;
	UE_LOG(LogTemp, Warning, TEXT("%i"), MaxInventorySize);
	
}
