// Fill out your copyright notice in the Description page of Project Settings.


#include "AsteroidField.h"
#include "Asteroid.h"

// Sets default values for this component's properties
UAsteroidField::UAsteroidField()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAsteroidField::BeginPlay()
{
	Super::BeginPlay();
	FVector lowerBounds = GetComponentLocation() - size;
	FVector upperBounds = GetComponentLocation() + size;
	for (int i = 0; i < numAsteroids; i++)
	{
		FVector location = FVector(FMath::FRandRange(lowerBounds.X, upperBounds.X), FMath::FRandRange(lowerBounds.Y, upperBounds.Y), FMath::FRandRange(lowerBounds.Z, upperBounds.Z));
		AAsteroid* SpawnedAsteroid = (AAsteroid*)GetWorld()->SpawnActor(AAsteroid::StaticClass(), &location);
	}
	// ...
	
}


// Called every frame
void UAsteroidField::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

