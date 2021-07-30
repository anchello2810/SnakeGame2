// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"
#include "Math/UnrealMathUtility.h"

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
// Called every frame
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//AddFoodElement();
}
/*void AFood::AddFoodElement()
{
	float MinY = -750; float MaxY = 830;
	float MinX = -330; float MaxX = 330;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);

		FVector StartPoint = FVector(SpawnX, SpawnY, 0);
		FTransform NewTransform(StartPoint);
		GetWorld()->SpawnActor<AFood>(FoodElement, StartPoint);
	
}*/

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
			Destroy();
		}
	}
}





