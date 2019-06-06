// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon_Item.generated.h"

/**
 * 
 */
UCLASS()
class THEAFFLICTION_API AWeapon_Item : public AItem
{
	GENERATED_BODY()

		AWeapon_Item();
	
public:
	float GetDamage() const;

private:
	UPROPERTY(EditDefaultsOnly)
	float Damage;
};
