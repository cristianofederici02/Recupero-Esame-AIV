// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "BossStates.h"
#include "BossAIController.generated.h"

/**
 * 
 */
UCLASS()
class RECUPEROESAME_API ABossAIController : public AAIController
{
	GENERATED_BODY()
	
public:
    ABossAIController();

protected:
    virtual void BeginPlay() override;
    virtual void OnPossess(APawn* InPawn) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    class UAIPerceptionComponent* PerceptionComp;

    UPROPERTY()
    class UAISenseConfig_Sight* SightConfig;

    UPROPERTY()
    class UAISenseConfig_Hearing* HearingConfig;

    UPROPERTY(EditAnywhere, Category = "AI")
    UBehaviorTree* BossBehaviorTree;

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    UBlackboardData* BossBlackboard;

    UFUNCTION()
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    void SetTarget(AActor* Actor);
};
