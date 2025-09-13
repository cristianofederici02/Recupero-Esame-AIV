#include "BTService_UpdateBossState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "BossCharacter.h"

UBTService_UpdateBossState::UBTService_UpdateBossState() {
    bNotifyTick = true;
    bNotifyBecomeRelevant = true;
    Interval = 0.25f;
    RandomDeviation = 0.05f;
    NodeName = TEXT("Update Boss State");
    TargetActorKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTService_UpdateBossState, TargetActorKey), AActor::StaticClass());
}

void UBTService_UpdateBossState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) {
    
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    if (!BB) return;

    AActor* Target = Cast<AActor>(BB->GetValueAsObject(TargetActorKey.SelectedKeyName));

    if (Target)
    {
        /*OwnerComp.GetBlackboardComponent()->*/BB->SetValueAsEnum(BossStateKey.SelectedKeyName, (uint8)EBossState::Chase);
    }
    else
    {
        /*OwnerComp.GetBlackboardComponent()->*/BB->SetValueAsEnum(BossStateKey.SelectedKeyName, (uint8)EBossState::Patrol);
    }
    //AAIController* AIC = OwnerComp.GetAIOwner();
    //ABossCharacter* Boss = AIC ? Cast<ABossCharacter>(AIC->GetPawn()) : nullptr;

    /*if (!Boss || !BB) 
    {
        return;
    }

    if (!Target) {
        BB->SetValueAsEnum(BossStateKey.SelectedKeyName, static_cast<uint8>(EBossState::Patrol));
        return;
    }*/

    /*const float Dist = FVector::Dist(Boss->GetActorLocation(), Target->GetActorLocation());
    const EBossState NewState = (Dist <= Boss->MidRange) ? EBossState::Attack : EBossState::Chase;
    BB->SetValueAsEnum(BossStateKey.SelectedKeyName, static_cast<uint8>(NewState));*/
}
