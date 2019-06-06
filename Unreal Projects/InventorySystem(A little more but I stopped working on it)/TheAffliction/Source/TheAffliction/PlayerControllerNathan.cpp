// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerControllerNathan.h"
#include "GameFramework/Controller.h"

void APlayerControllerNathan::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerPawn();
}


void APlayerControllerNathan::MoveForwardBackward(float AxisValue)
{
	KeyPressFB = AxisValue;
	FVector Forward = FVector(PlayerMovementSpeed, 0.f, 0.f);
	FVector Backward = FVector(-PlayerMovementSpeed, 0.f, 0.f);
	FVector CurrentLocation = PlayerPawn->GetActorLocation();
	FVector NewLocation = FVector();

	if (AxisValue > 0) 
	{ 
		NewLocation = CurrentLocation + Forward;
		PlayerPawn->SetActorLocation(NewLocation);
		return;
	}
	else if (AxisValue < 0)
	{ 
		NewLocation = CurrentLocation + Backward;
		PlayerPawn->SetActorLocation(NewLocation);
		return;
	}
}

void APlayerControllerNathan::MoveLeftRight(float AxisValue)
{
	KeyPressLR = AxisValue;
	FVector Left = FVector(0.f, PlayerMovementSpeed, 0.f);
	FVector Right = FVector(0.f, -PlayerMovementSpeed, 0.f);
	FVector CurrentLocation = PlayerPawn->GetActorLocation();
	FVector NewLocation = FVector();
	
	if (AxisValue > 0)
	{
		NewLocation = CurrentLocation + Left;
		PlayerPawn->SetActorLocation(NewLocation);
		return;
	}
	else if (AxisValue < 0)
	{
		NewLocation = CurrentLocation + Right;
		PlayerPawn->SetActorLocation(NewLocation);
		return;
	}
}

void APlayerControllerNathan::StartSprint()
{
	PlayerMovementSpeed *= 2;
	return;
}

void APlayerControllerNathan::StopSprint()
{
	PlayerMovementSpeed /= 2;
	return;
}

void APlayerControllerNathan::SetPlayerPawn()
{
	PlayerPawn = Cast<AActor>(GetPawn());
}

bool APlayerControllerNathan::isKeyPressed()
{
	if (KeyPressFB != 0 || KeyPressLR != 0)
	{
		return true;
	}
	return false;
}