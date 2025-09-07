// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BossStates.generated.h"

UENUM(BlueprintType)
enum class EBossState : uint8
{
    Patrol UMETA(DisplayName = "Patrol"),
    Chase  UMETA(DisplayName = "Chase"),
    Attack UMETA(DisplayName = "Attack")
};
