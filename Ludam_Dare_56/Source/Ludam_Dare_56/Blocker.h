#pragma once

#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Blocker.generated.h"

UCLASS()
class UBlocker : public USphereComponent
{
	GENERATED_BODY()
public:
	bool HandleCollision(TArray<AActor*>& arr)
	{
		for (int i = arr.Num(); i > 0; --i)
		{
			if (FVector::DistSquared(arr[i]->GetActorLocation(), GetOwner()->GetActorLocation()) < FMath::Square(GetScaledSphereRadius()))
			{
				AActor* a = arr[i];
				arr.RemoveAt(i);

				//do cleanup of a based on what the player class is
			}
		}
		if (arr.Num() == 0)
		{
			return true;
		}
		return false;
	}
};