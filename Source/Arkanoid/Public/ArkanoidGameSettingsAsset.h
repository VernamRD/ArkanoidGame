// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ArkanoidGameSettingsAsset.generated.h"

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
};
