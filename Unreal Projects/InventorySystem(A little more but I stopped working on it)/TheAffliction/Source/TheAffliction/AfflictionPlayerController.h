// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AfflictionPlayerController.generated.h"

class UAfflictionMovementComponent;
class APlayerCharacter;
class UInventory;

class AItem;

/**
 * A controller responsible for handling all requests made from the player and to the player. Delegates work to components attached to the player. This delegation is handled in BPs' because Flipbook handling in C++ is a giant hassle that's an undocumented mess :)
 */
UCLASS()
class THEAFFLICTION_API AAfflictionPlayerController : public APlayerController
{
	GENERATED_BODY()

	APlayerCharacter* Player = nullptr;
	UAfflictionMovementComponent* PlayerMovementComponent = nullptr;
	UInventory* PlayerInventory = nullptr;

	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	UAfflictionMovementComponent* GetMovementComponent() const;

	UFUNCTION(BlueprintCallable)
	UInventory* GetInventoryComponent() const;

	DECLARE_DELEGATE_OneParam(AddItemToInventory, AItem*)
	void AddAItem(AItem* ItemToAdd);

};
