// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PlayerStatsController.generated.h"

/**
 * 
 */
UCLASS()
class THEAFFLICTION_API APlayerStatsController : public AAIController
{
	GENERATED_BODY()

	//MAXES
	float MAX_Stamina;
	float MAX_Health;
	float MAX_Mana;

	//CURRENTS
	float Stamina;
	float Health;
	float Mana;

	//METHODS
	UFUNCTION(BlueprintCallable)
	void StaminaHandle();


	//GETTERS
	UFUNCTION(BlueprintCallable)
	float GetStaminas(int whichStamina) const;
	UFUNCTION(BlueprintCallable)
	float GetHealths(int whichHealth) const;
	UFUNCTION(BlueprintCallable)
	float GetManas(int whichMana) const;
};
