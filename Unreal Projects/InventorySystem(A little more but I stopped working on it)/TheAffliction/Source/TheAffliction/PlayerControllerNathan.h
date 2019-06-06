// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerNathan.generated.h"

/**
 * The modified player controller probably to be used for most of the game
 */
UCLASS()
class THEAFFLICTION_API APlayerControllerNathan : public APlayerController
{
	GENERATED_BODY()

public:
	bool isKeyPressed();

private:
	//Variables
	UPROPERTY(EditDefaultsOnly)
	float PlayerMovementSpeed;

	float KeyPressLR = 0.0f;
	float KeyPressFB = 0.0f;

	AActor* PlayerPawn = nullptr;

	void SetPlayerPawn();

	//Functions responsible for moving the player in the world
	UFUNCTION(BlueprintCallable)
	void MoveForwardBackward(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void MoveLeftRight(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void StartSprint();
	UFUNCTION(BlueprintCallable)
	void StopSprint();

	void BeginPlay() override;
};
