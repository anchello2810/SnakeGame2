// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SpeedBonus.generated.h"

UCLASS()
class SNAKEGAME2_API ASpeedBonus : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpeedBonus();
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ASpeedBonus> BonusClass;

	UPROPERTY(EditDefaultsOnly)
		int TickMoment;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact(AActor* Interactor, bool bIsHead) override;

	UFUNCTION(BlueprintCallable)
		void AddBonus();

};
