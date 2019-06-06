// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AfflictionMovementComponent.generated.h"

class AAfflictionCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEAFFLICTION_API UAfflictionMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAfflictionMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Walk(float AxisValue, FString DirectionIdentifier);

	UFUNCTION(BlueprintCallable)
	void Sprint(float AxisValue);

	UFUNCTION(BlueprintCallable)
	bool StaminaHandle();

	UFUNCTION(BlueprintCallable)
	float GetPlayerStamina() const;

private:
	AAfflictionCharacter* Owner = nullptr;

	bool bIsSprinting = false;
	bool bCanSprint = true;

	float CharacterMovementSpeed;
	float WalkSpeed = 2.5;
	float SprintSpeed = 2.f;// The amount to increase while sprinting or decrease when not sprinting. This is multiplied and divided. TODO make a better name

	//TODO find a way the leveling system can handle this/player stats
	

	float Stamina; //TODO come revise this. For now it will represent an amount of time in seconds
	float MaxStamina = 10.f;
	

	float GetMovementSpeed() const;
	float GetSprintSpeed() const;
	float GetWalkSpeed() const;
};
