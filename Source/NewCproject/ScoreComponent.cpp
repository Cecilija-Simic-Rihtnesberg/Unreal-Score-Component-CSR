// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreComponent.h"

#include "GameFramework/Character.h"

// Sets default values for this component's properties
UScoreComponent::UScoreComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UScoreComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UScoreComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UScoreComponent::IncreaseScore()
{
	CurrentScore++;
	
		if(CurrentScore == 5)
	 	{
		Cast<ACharacter>(GetOwner())->Jump();
}

}


