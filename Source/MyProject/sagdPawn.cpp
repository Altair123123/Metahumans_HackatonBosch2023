// Fill out your copyright notice in the Description page of Project Settings.


#include "sagdPawn.h"

// Sets default values
AsagdPawn::AsagdPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AsagdPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AsagdPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AsagdPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

