// Fill out your copyright notice in the Description page of Project Settings.

#include "Nathan.h"
#include "PlayerControllerNathan.h"

// Sets default values
ANathan::ANathan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANathan::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerController();
}

// Called every frame
void ANathan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckForKeyPress();
}

// Called to bind functionality to input
void ANathan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANathan::SetPlayerController()
{
	PlayerController = Cast<APlayerControllerNathan>(GetController());
}

void ANathan::CheckForKeyPress()
{
	//Ask the player controller if a key is being pressed currently
	if (PlayerController->isKeyPressed())
	{
		LastKeyPressTime = GetWorld()->GetTimeSeconds();
		bLastKeyPressGreaterThan2 = false;

	}
	//if its not then we will check to see if its been 2 seconds since last key press
	else if ((GetWorld()->GetTimeSeconds() - LastKeyPressTime) >= 2)
	{
		bLastKeyPressGreaterThan2 = true;
	}
}

