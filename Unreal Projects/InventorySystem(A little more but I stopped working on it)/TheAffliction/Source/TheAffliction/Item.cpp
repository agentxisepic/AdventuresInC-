// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Amount = 1;
	Rarity = 0;
	bIsStackable = false;
}

AItem::~AItem()
{
	UE_LOG(LogTemp, Warning, TEXT("DeconstructedAItem"));
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AItem::GetIsStackable() const
{
	return bIsStackable;
}

FText AItem::GetName() const
{
	return Name;
}

FText AItem::GetDescription() const
{
	return Description;
}

FText AItem::GetType() const
{
	return Type;
}

int32 AItem::GetRarity() const
{
	return Rarity;
}

int32 AItem::GetAmount() const
{
	return Amount;
}

int32 AItem::GetMaxAmount() const
{
	return MaxAmount;
}

//A function to change the amount of a certain item in an inventory
int32 AItem::ChangeAmount(int32 AmountToAdd)
{
	if (bIsStackable)
	{
		Amount += AmountToAdd;
		if (Amount == 0)
		{
			this->Destroy();
			return 1;
		}
		return 0;
	}
	return 0;
}

int32 AItem::GetAmountOfRoom()
{
	return GetMaxAmount() - GetAmount();
}
