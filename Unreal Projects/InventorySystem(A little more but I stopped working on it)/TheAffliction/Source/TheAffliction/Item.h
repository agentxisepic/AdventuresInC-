// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class THEAFFLICTION_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	~AItem();

	UFUNCTION(BlueprintCallable)
	bool GetIsStackable() const;

	UFUNCTION(BlueprintCallable)
	FText GetName() const;

	UFUNCTION(BlueprintCallable)
	FText GetDescription() const;

	UFUNCTION(BlueprintCallable)
	FText GetType() const;

	int32 GetRarity() const;

	UFUNCTION(BlueprintCallable)
	int32 GetAmount() const;

	int32 GetMaxAmount() const;

	UFUNCTION(BlueprintCallable)
	int32 ChangeAmount(int32 AmountToAdd);

	int32 GetAmountOfRoom();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FText Type;

	UPROPERTY(EditDefaultsOnly)
	bool bIsStackable;

	UPROPERTY(EditDefaultsOnly)
	FText Name;

	UPROPERTY(EditDefaultsOnly)
	FText Description;

	UPROPERTY(EditDefaultsOnly)
	int32 Rarity;

	UPROPERTY(EditAnywhere)
	int32 Amount;

	UPROPERTY(EditDefaultsOnly)
	int32 MaxAmount;
};
