// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

class AItem;

//A structure that defines what each item in the linked list will store
struct ItemNode
{
	AItem* Data = nullptr;
	ItemNode* NextItem = nullptr;
	ItemNode* LastItem = nullptr;
	int32 InventorySlot;
};


/**
 * A linked list data structure specifically made for storing items in an inventory
 */
class THEAFFLICTION_API InventoryDataStructure
{
public:
	InventoryDataStructure();
	~InventoryDataStructure();

	void AddItem(AItem* Data, int32 InventorySlotToUse);
	ItemNode* FindItem(int32 GotoInventorySlot);
	void RemoveItem(int32 InventorySlot);
	int32 GetNumberOfItems() const;
	bool FindItemByType(FText Type, TArray<ItemNode*>* VectorOfItemsOut);
	void SetMaxInventorySize(int32 MaxNumberOfItems);

private:
	ItemNode* head;
	ItemNode* tail;
	int32 Size;
	int32 NumberOfItems; //The number of items currently in the inventory
	int32 MaxInventorySize;
};

