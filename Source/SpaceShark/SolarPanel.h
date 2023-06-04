// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarPanel.generated.h"

UCLASS()
class SPACESHARK_API ASolarPanel : public AActor
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;
	
public:	
	// Sets default values for this actor's properties
	ASolarPanel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
