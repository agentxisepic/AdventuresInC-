 // Fill out your copyright notice in the Description page of Project Settings.

#include "AfflictionMovementComponent.h"
#include "Public/TimerManager.h"
#include "Engine/Engine.h"
#include "AfflictionCharacter.h"

// Sets default values for this component's properties
UAfflictionMovementComponent::UAfflictionMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Owner = Cast<AAfflictionCharacter>(GetOwner());
	CharacterMovementSpeed = WalkSpeed;
	SprintSpeed *= WalkSpeed;
	Stamina = MaxStamina;
}


// Called when the game starts
void UAfflictionMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("%f"), GetMovementSpeed());
	//GetWorld()->GetTimerManager().SetTimer(TestHandle, 5.0f, false, 0.f);
	//TimerTesting();
	// ...
	
}


// Called every frame
void UAfflictionMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

//Allows the player to Walk Forward, Backward, Left and Right in the level
void UAfflictionMovementComponent::Walk(float AxisValue, FString DirectionIdentifier)
{
	if (DirectionIdentifier == "FB")
	{
		if (AxisValue > 0)
		{
			FVector Forward = FVector(GetMovementSpeed(), 0.f, 0.f);
			Owner->SetActorLocation(FVector(Owner->GetActorLocation() + Forward));
			//UE_LOG(LogTemp, Warning, TEXT("Moving the pawn Forward"));
		}
		else if (AxisValue < 0)
		{
			FVector Backward = FVector(-(GetMovementSpeed()), 0.f, 0.f);
			Owner->SetActorLocation(FVector(Owner->GetActorLocation() + Backward));
			//UE_LOG(LogTemp, Warning, TEXT("Moving the pawn Backward"));
		}
	}
	else if (DirectionIdentifier == "LR")
	{
		if (AxisValue > 0)
		{
			FVector Right = FVector(0.f, GetMovementSpeed(), 0.f);
			Owner->SetActorLocation(FVector(Owner->GetActorLocation() + Right));
			//UE_LOG(LogTemp, Warning, TEXT("Moving the pawn Right"));
		}
		else if (AxisValue < 0)
		{
			FVector Left = FVector(0.f, -(GetMovementSpeed()), 0.f);
			Owner->SetActorLocation(FVector(Owner->GetActorLocation() + Left));
			//UE_LOG(LogTemp, Warning, TEXT("Moving the pawn Left"));
		}
	}
}

void UAfflictionMovementComponent::Sprint(float AxisValue)
{
	if (!bIsSprinting && AxisValue == 1 && bCanSprint)
	{
		CharacterMovementSpeed = GetSprintSpeed();
		bIsSprinting = true;
	}
	else if (bIsSprinting && AxisValue == 0)
	{
		CharacterMovementSpeed = GetWalkSpeed();
		bIsSprinting = false;
	}
}

bool UAfflictionMovementComponent::StaminaHandle()
{
	if (bCanSprint) 
	{
		if (Stamina <= 0)
		{
			bCanSprint = false;
			bIsSprinting = false;
			CharacterMovementSpeed = GetWalkSpeed();
		}
		else if (bIsSprinting && Stamina > 0)
		{
			Stamina -= 0.01;
		}
		else if (!bIsSprinting && Stamina < MaxStamina)
		{
			Stamina += 0.01;
		}
	}
	else
	{
		if (Stamina == MaxStamina)
		{
			bCanSprint = true;
		}
		else
		{
			Stamina += 0.01;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Stamina: %f"), Stamina);
	UE_LOG(LogTemp, Warning, TEXT("CharacterMovementSpeed: %f"), CharacterMovementSpeed);
	return bIsSprinting;
}


float UAfflictionMovementComponent::GetMovementSpeed() const
{
	return CharacterMovementSpeed;
}

float UAfflictionMovementComponent::GetSprintSpeed() const
{
	return SprintSpeed;
}

float UAfflictionMovementComponent::GetWalkSpeed() const
{
	return WalkSpeed;
}

float UAfflictionMovementComponent::GetPlayerStamina() const
{
	return MaxStamina;
}