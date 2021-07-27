// Fill out your copyright notice in the Description page of Project Settings.
//Dont copy me nerds


#include "Pamphlet.h"

// Sets default values
APamphlet::APamphlet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pamphlet Mesh"));
	SuperMesh->SetCollisionProfileName(TEXT("OverlapAll"));
}

// Called when the game starts or when spawned
void APamphlet::BeginPlay()
{
	Super::BeginPlay();
	int location = 0;
	
}

// Called every frame
void APamphlet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

