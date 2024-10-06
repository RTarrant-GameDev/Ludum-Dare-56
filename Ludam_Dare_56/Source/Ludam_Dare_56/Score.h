#pragma once

#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "Score.generated.h"

USTRUCT()
struct FDummy
{
	GENERATED_BODY()
	float hey; // << this line made it compile lol
};

constexpr float LvlCharMultiplier = 0.3f;
constexpr float LvlTimeMultiplier = 0.1f;

USTRUCT(BlueprintType)
struct FScoreSystem
{
	GENERATED_BODY()
public:
	float m_totalScore = 0.f;
	float m_currentScore = 0.f;
};

UCLASS(BlueprintType)
class UScoreComp : public UActorComponent
{
	GENERATED_BODY()
public:
	UScoreComp();
public:
	float m_score;
public:
	void AddScore(const float Score)
	{
		m_score += Score;
	}
};


/*
private:
	float lvlKJMultiplier = 1; //Add 0.3f for each 2 KJ that finishes the level.
	float lvlTimeMultiplier = 1; //Add 0.1f for each second remaining.
	int32 lvlScore = 0;

public:
	void PlayerState::ScoreUpdate(int32 NewValue)
	{
		if (lvlScore != NewValue)
		{
			lvlScore = NewValue;
		}


	}

	// Ends timer when first KJ collides with end goal, then calculates time multiplier.
	void PlayerState::TimeMultiplier()
	{
		//EndTimer
		lvlTimeMultiplier = lvlTimeMultiplier + //Timer/10;
	}
*/