// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Armor_Item.generated.h"

/**
 * 
 */
UCLASS()
class THEAFFLICTION_API AArmor_Item : public AItem
{
	GENERATED_BODY()

	AArmor_Item();
	
public:
	float GetProtection() const;

private:
	UPROPERTY(EditDefaultsOnly)
	float Protection;

	UPROPERTY(EditDefaultsOnly)
	bool bHasBuffs;

	UPROPERTY(EditDefaultsOnly)
	FText Buff;
};
