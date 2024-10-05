#pragma once

#include "Engine/TimerHandle.h"
#include "EventLoop/EventLoopTimer.h"
#include "TimerManager.h"
#include "Timer.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnLevelEndSignature);

constexpr float CharTimeAddition = 3.f;

UCLASS(BlueprintType)
class UTimer : public UObject
{
	GENERATED_BODY()
	UTimer()
	{
		
	}
public:
	FOnLevelEndSignature m_onLevelEnd;
	//UEventHolder* Holder;
	UPROPERTY(EditAnywhere)
	uint16 CharAmount = 0;
	UPROPERTY(EditAnywhere)
	FTimerHandle m_handle;
	UPROPERTY(EditAnywhere)
	float lvlTime;
	UFUNCTION(BlueprintCallable)
	void Timer()
	{
		FTimerDelegate del = FTimerDelegate::CreateUObject(this, &UTimer::StopTimer);
		GetWorld()->GetTimerManager().SetTimer(m_handle, del, lvlTime, false);
	}

	UFUNCTION(BlueprintCallable)
	void AdjustTime(const float AddedVal)
	{
		FTimerManager& m = GetWorld()->GetTimerManager();

		float remaining = m.GetTimerRemaining(m_handle) + AddedVal;
		if (remaining < 0)
		{
			return StopTimer();
		}
		FTimerDelegate del = FTimerDelegate::CreateUObject(this, &UTimer::StopTimer);
		m.SetTimer(m_handle, del, remaining, false);
	}

	UFUNCTION(BlueprintCallable)
	void AddTime()
	{
		//When KJs are added, add to timer.
		//GetWorld
		//GetWorld
		AdjustTime(CharTimeAddition);
		CharAmount++;
	}

	UFUNCTION(BlueprintCallable)
	void SubtractTime()
	{
		AdjustTime(-CharTimeAddition);
		CharAmount--;
	}

	UFUNCTION(BlueprintCallable)
	void StopTimer()
	{
		// get the level time, then...
		GetWorld()->GetTimerManager().ClearTimer(m_handle);
		m_onLevelEnd.Broadcast();
	}
};