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
	float MinY = -700; float MaxY = 780;
	float MinX = -270; float MaxX = 270;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);

	FVector StartPoint = FVector(SpawnX, SpawnY, 0);
	FRotator StartRot = FRotator(0, 0, 0);
	FTransform NewTransform(StartPoint);

	//World->SpawnActor(AActor::StaticClass(), &StartPoint, &StartRot, SpawnParametres);

	AFood* FoodEl;
	FoodEl = GetWorld()->SpawnActor<AFood>(FoodClass, NewTransform);
	
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
