// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AfflictionCharacter.h"
#include "PlayerCharacter.generated.h"

class UInventory;

/**
 * 
 */
UCLASS()
class THEAFFLICTION_API APlayerCharacter : public AAfflictionCharacter
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	int32 GetInventorySize() const;

	UInventory* RetrieveInventoryComponent() const;

private:
	APlayerCharacter();

	UPROPERTY(EditDefaultsOnly)
	int32 InventorySize = 5;

	UInventory* InventoryComponent;
	
};
