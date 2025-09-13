// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAIController.h"
#include "BossCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"

ABossAIController::ABossAIController()
{
    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));

    UE_LOG(LogTemp, Warning, TEXT("BossAIController costruito"));

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
        PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &ABossAIController::OnTargetPerceptionUpdated);
        UE_LOG(LogTemp, Warning, TEXT("Perception agganciato"));
    }
}

void ABossAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    UE_LOG(LogTemp, Warning, TEXT("BossAIController: OnPossess chiamato per %s"), *InPawn->GetName());
    if (BossBlackboard && BossBehaviorTree)
    {
        UBlackboardComponent* BBComp;
        if (UseBlackboard(BossBlackboard, BBComp))
        {
            RunBehaviorTree(BossBehaviorTree);
            UE_LOG(LogTemp, Warning, TEXT("Behavior Tree avviato: %s"), *BossBehaviorTree->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UseBlackboard fallito!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BossBlackboard o BossBehaviorTree non assegnato!"));
    }
    /*ABossCharacter* Boss = Cast<ABossCharacter>(InPawn);
    if (Boss && BossBehaviorTree)
    {
        RunBehaviorTree(BossBehaviorTree);
    }*/
}

void ABossAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    //*Actor->GetName(), Stimulus.WasSuccessfullySensed();
    
    //if (!Actor)return;
    UBlackboardComponent* BB = GetBlackboardComponent();
    UE_LOG(LogTemp, Warning, TEXT("Boss Percepisce: %s"),*Actor->GetName());
    /*if (BB)
    {
        BB->SetValueAsObject(TEXT("TargetActor"), Actor);
    }*/

    if (!BB || !Actor)return;
    
    if (Stimulus.WasSuccessfullySensed()) 
    {
        BB->SetValueAsObject(TEXT("TargetActor"), Actor);
    }
    else
    {
        BB->ClearValue(TEXT("TargetActor"));
    }
    /*for (AActor* Actor : UpdatedActors) 
    {
        UE_LOG(LogTemp, Warning, TEXT("Percepito: %s"), *Actor->GetName());

        if (Cast<APawn>(Actor))
        {
            BB->SetValueAsObject(TEXT("TargetActor"), Actor);
            return;
        }
    BB->ClearValue(TEXT("TargetActor"));
    }*/
}

void ABossAIController::SetTarget(AActor* Actor)
{
    if (UBlackboardComponent* BB = GetBlackboardComponent())
    {
        BB->SetValueAsObject("TargetActor", Actor);
    }
}

