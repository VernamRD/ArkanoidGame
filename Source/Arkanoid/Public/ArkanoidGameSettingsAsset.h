// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ArkanoidGameSettingsAsset.generated.h"

USTRUCT(Blueprintable)
struct FPowerUpData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AActor> PowerUpClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Chance;
};

UCLASS(Blueprintable, BlueprintType)
class ARKANOID_API UArkanoidGameSettingsAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cart");
    float DefaultCartWidth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Game");
    int32 BallsCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Game")
    float GameAreaWidth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ball");
    float DefaultBallVelocity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ball");
    float DefaultBallSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Block");
    float DefaultBlockWidth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Block");
    float DefaultBlockHeight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Block");
    int32 BlockScore;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Block");
    int32 BlockPerHPScoreModifier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Block");
    TArray<FLinearColor> ColorPerHP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PowerUp")
    float PowerUpSize;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PowerUp")
    float FallSpeed;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PowerUp")
    TArray<FPowerUpData> PowerUpData;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Game")
    TArray<TSoftObjectPtr<UDataTable>> Levels;
};
