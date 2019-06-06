// Fill out your copyright notice in the Description page of Project Settings.

#include "AfflictionPlayerController.h"
#include "AfflictionMovementComponent.h"
#include "Inventory.h"
#include "PlayerCharacter.h"

void AAfflictionPlayerController::BeginPlay()
{
	Super::BeginPlay();
	//Casting the pawn the controller is attached to to a AfflictionCharacter because we want to call methods on the affliction character class not Pawn class methods
	Player = Cast<APlayerCharacter>(GetPawn());
	//Get the movement component on our pawn/player so we can delegate tasks to it
	PlayerMovementComponent = Player->RetrieveMovementComponent();
	//Get the inventory component on the player so the player controller can delegate tasks to it when it recieves requests
	PlayerInventory = Player->RetrieveInventoryComponent();
}

UAfflictionMovementComponent* AAfflictionPlayerController::GetMovementComponent() const
{
	return PlayerMovementComponent;
}

UInventory* AAfflictionPlayerController::GetInventoryComponent() const
{
	return PlayerInventory;
}

void AAfflictionPlayerController::AddAItem(AItem* ItemToAdd)
{
	PlayerInventory->AddItem(ItemToAdd);
}