// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"

class InventoryDataStructure;
class APlayerCharacter;
class AItem;

//A component for managing an inventory
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEAFFLICTION_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	

private:
	InventoryDataStructure* Inventory;
	APlayerCharacter* Player;

	int32 InventoryNumberToUse;

	AItem* EquippedItems[10];

public:
	UFUNCTION(BlueprintCallable)
	int32 AddItem(AItem* ItemToAdd);

	UFUNCTION(BlueprintCallable)
	void RemoveItem(int32 ItemToRemoveSlotNumber);

	UFUNCTION(BlueprintCallable)
	void ListItems() const;

	UFUNCTION(BlueprintCallable)
	int32 GetNumberOfItems() const;

	UFUNCTION(BlueprintCallable)
	int32 FindNextEmptyInventorySlot();

	UFUNCTION(BlueprintCallable)
	AItem*	FindItem(int32 InventorySlot);

	UFUNCTION(BlueprintCallable)
	void SwapItems(int32 InventorySlotA, int32 InventorySlotB);

	UFUNCTION(BlueprintCallable)
	AItem* ChangeItemsInventorySlot(int32 InventorySlotOfItem, int32 NewInventorySlot);
};
