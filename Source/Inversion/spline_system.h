// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "spline_system.generated.h"

UCLASS()
class INVERSION_API Aspline_system : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aspline_system();



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USplineComponent* spline;
		

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
