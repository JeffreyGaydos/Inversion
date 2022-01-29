// Fill out your copyright notice in the Description page of Project Settings.


#include "spline_system.h"

// Sets default values
Aspline_system::Aspline_system()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	spline = CreateDefaultSubobject<USplineComponent>(FName("splines"));

	float length = spline->GetSplineLength();
	float divisor = 20;

	float remander = FMath::DivideAndRoundUp(length, divisor);
}

// Called when the game starts or when spawned
void Aspline_system::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aspline_system::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

