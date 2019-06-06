// Fill out your copyright notice in the Description page of Project Settings.

#include "AfflictionCharacter.h"
#include "AfflictionMovementComponent.h"
#include "Inventory.h"

// Sets default values
AAfflictionCharacter::AAfflictionCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;// TODO review at a later time wether Characters in the game need to Tick for some reason
	MovementComponent = CreateDefaultSubobject<UAfflictionMovementComponent>(FName("MovementComponent"));
}

// Called when the game starts or when spawned
void AAfflictionCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAfflictionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UAfflictionMovementComponent* AAfflictionCharacter::RetrieveMovementComponent() const
{
	return MovementComponent;
}

