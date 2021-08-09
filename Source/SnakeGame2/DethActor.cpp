// Fill out your copyright notice in the Description page of Project Settings.


#include "DethActor.h"
#include "SnakeBase.h"
#include "Engine/World.h"

// Sets default values
ADethActor::ADethActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADethActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADethActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//CollideActor();
}

/*void ADethActor::CollideActor()
{
	TArray<AActor*> CollectedActors;
	GetOverlappingActors(CollectedActors);
	for (int32 i = 0; i < CollectedActors.Num(); ++i)
	{
		CollectedActors[i]->Destroy(true, true);
	}
}*/

void ADethActor::Interact(AActor* Interactor, bool bIsHead)
{
	auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->Destroy(true, true);
		}
	
}


