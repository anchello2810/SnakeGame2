// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodElement.h"

// Sets default values
AFoodElement::AFoodElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EAT"));
}

// Called when the game starts or when spawned
void AFoodElement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

