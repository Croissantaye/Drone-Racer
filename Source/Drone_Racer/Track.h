// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Track.generated.h"

UCLASS()
class DRONE_RACER_API ATrack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) UProceduralMeshComponent* procMesh;

	TArray<FVector> Vertices;
	TArray<int32> Triangles;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
