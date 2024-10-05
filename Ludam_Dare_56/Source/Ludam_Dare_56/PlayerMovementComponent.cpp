// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovementComponent.h"

// Sets default values for this component's properties
UPlayerMovementComponent::UPlayerMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerActor = GetOwner();
}


// Called every frame
void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerMovementComponent::Move(float Direction)
{
	if (OwnerActor != nullptr && Direction != 0.0f)
	{
		FVector NewLocation = OwnerActor->GetActorLocation();

		NewLocation.X += Direction * Speed * GetWorld()->GetDeltaSeconds();

		OwnerActor->SetActorLocation(NewLocation);
	}
}



