// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Medical_Item.generated.h"

/**
 * 
 */
UCLASS()
class THEAFFLICTION_API AMedical_Item : public AItem
{
	GENERATED_BODY()

		AMedical_Item();
	
public:

private:
	UPROPERTY(EditDefaultsOnly)
	bool bCanHeal;
	
	UPROPERTY(EditDefaultsOnly)
	bool bCanBuff;

	UPROPERTY(EditDefaultsOnly)
	bool bCanDebuff;

	UPROPERTY(EditDefaultsOnly)
	float AmountToHeal;
	
	UPROPERTY(EditDefaultsOnly)
	float AmountToBuff;

	UPROPERTY(EditDefaultsOnly)
	float AmountToDebuff;

	UPROPERTY(EditDefaultsOnly)
	FText AffectedAttributeToBuff;

	UPROPERTY(EditDefaultsOnly)
	FText AffectedAttributeToDebuff;
};
