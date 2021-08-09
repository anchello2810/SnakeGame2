// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"


// Sets default values
AFood::AFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AFood::BeginPlay()
{
	Super::BeginPlay();	
}


void AFood::AddFoodElement()
{
	float MinY = -600; float MaxY = 740;
	float MinX = -240; float MaxX = 250;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);

	FVector StartPoint = FVector(SpawnX, SpawnY, 0);
	FRotator StartRot = FRotator(0, 0, 0);
	FTransform NewTransform(StartPoint);
	
	AFood* FoodEl;
	FoodEl = GetWorld()->SpawnActor<AFood>(FoodClass, NewTransform);
	TArray<AActor*> FoundActors;
	GetOverlappingActors(FoundActors);
	for (int32 i = 0; i < FoundActors.Num(); ++i)
	{
		FVector Startpoint = FVector(SpawnX + 25, SpawnY + 25, 0);
		FTransform Transform2(Startpoint);
		GetWorld()->SpawnActor<AFood>(FoodClass, Transform2);
	}
	
}
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called every frame

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{

			Snake->AddSnakeElement();
			Destroy();
			AddFoodElement();
		}
	}
}


