// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pamphlet.generated.h"

UCLASS()
class LONG_MAN_7_PAMPHLETS_API APamphlet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APamphlet();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SuperMesh;
};
