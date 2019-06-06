// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Inventory.h"

APlayerCharacter::APlayerCharacter()
{
	InventoryComponent = CreateDefaultSubobject<UInventory>(FName("Inventory"));
}

UInventory* APlayerCharacter::RetrieveInventoryComponent() const
{
	return InventoryComponent;
}

int32 APlayerCharacter::GetInventorySize() const
{
	return InventorySize;
}