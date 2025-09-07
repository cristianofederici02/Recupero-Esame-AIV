// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAIController.h"
#include "BossCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"

ABossAIController::ABossAIController()
{
    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));

    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->SightRadius = 2000.f;
    SightConfig->LoseSightRadius = 2300.f;
    SightConfig->PeripheralVisionAngleDegrees = 90.f;
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;

    HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
    HearingConfig->HearingRange = 1500.f;
    HearingConfig->DetectionByAffiliation.bDetectEnemies = true;

    PerceptionComp->ConfigureSense(*SightConfig);
    PerceptionComp->ConfigureSense(*HearingConfig);
    PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
}

void ABossAIController::BeginPlay()
{
    Super::BeginPlay();

    if (PerceptionComp)
    {
        PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &ABossAIController::OnPerceptionUpdated);
    }
}

void ABossAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (BossBlackboard && BossBehaviorTree)
    {
        UBlackboardComponent* BBComp;
        if (UseBlackboard(BossBlackboard, BBComp))
        {
            RunBehaviorTree(BossBehaviorTree);
        }
    }
    /*ABossCharacter* Boss = Cast<ABossCharacter>(InPawn);
    if (Boss && BossBehaviorTree)
    {
        RunBehaviorTree(BossBehaviorTree);
    }*/
}

void ABossAIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (Stimulus.WasSuccessfullySensed())
    {
        SetTarget(Actor);
    }
    else
    {
        SetTarget(nullptr);
    }
}

void ABossAIController::SetTarget(AActor* Actor)
{
    if (UBlackboardComponent* BB = GetBlackboardComponent())
    {
        BB->SetValueAsObject("TargetActor", Actor);
    }
}

