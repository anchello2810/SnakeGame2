// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "DethActor.generated.h"

UCLASS()
class SNAKEGAME2_API ADethActor : public AActor, public IInteractable
{
	GENERATED_BODY()
		UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ADethActor> ADethClass;
public:	
	// Sets default values for this actor's properties
	ADethActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void CollideActor();

	virtual void Interact(AActor* Interactor, bool bIsHead) override;


};
