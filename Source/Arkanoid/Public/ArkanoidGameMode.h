// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoidGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBallLost);

UCLASS()
class ARKANOID_API AArkanoidGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintAssignable, Category="Arkanoid")
    FOnBallLost OnBallLost;
};
