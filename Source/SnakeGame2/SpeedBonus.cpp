// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBonus.h"
#include "SnakeBase.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"

// Sets default values
ASpeedBonus::ASpeedBonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TickMoment = 1;

}

// Called when the game starts or when spawned
void ASpeedBonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpeedBonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickMoment++;
	if (TickMoment > 10)
	{
		AddBonus();
	}
	else if (TickMoment = 10)
	{
		TickMoment = 1;
	}
}

void ASpeedBonus::AddBonus()
{
	float MinY = -600; float MaxY = 740;
	float MinX = -240; float MaxX = 250;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);

	FVector StartPoint = FVector(SpawnX, SpawnY, 0);
	FRotator StartRot = FRotator(0, 0, 0);
	FTransform NewTransform(StartPoint);
	GetWorld()->SpawnActor<ASpeedBonus>(BonusClass, NewTransform);
}
void ASpeedBonus::Interact(AActor* Interactor, bool bIsHead)
{
	int a = 0;
	while (a < 3)
	{
		if (bIsHead) {
			auto Snake = Cast<ASnakeBase>(Interactor);
			if (IsValid(Snake)) {
				Snake->MovementSpeed -= 0.1;
				Snake->SetActorTickInterval(Snake->MovementSpeed);
				this->Destroy();
			}
			++a;
		}		
	}
}






