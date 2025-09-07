#include "BTTask_AttackSelector.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "BossCharacter.h"

UBTTask_AttackSelector::UBTTask_AttackSelector() {
    NodeName = TEXT("Attack Selector (Melee / MidRange)");
    TargetActorKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_AttackSelector, TargetActorKey), AActor::StaticClass());
}

EBTNodeResult::Type UBTTask_AttackSelector::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8*) {
    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    if (!BB) return EBTNodeResult::Failed;

    AActor* Target = Cast<AActor>(BB->GetValueAsObject(TargetActorKey.SelectedKeyName));
    AAIController* AIC = OwnerComp.GetAIOwner();
    ABossCharacter* Boss = AIC ? Cast<ABossCharacter>(AIC->GetPawn()) : nullptr;
    if (!Boss || !Target) return EBTNodeResult::Failed;

    const float Dist = FVector::Dist(Boss->GetActorLocation(), Target->GetActorLocation());
    if (!Boss->bCanAttack) return EBTNodeResult::Failed;

    if (Dist <= Boss->MeleeRange) {
        Boss->MeleeAttack(Target);
        return EBTNodeResult::Succeeded;
    }
    if (Dist <= Boss->MidRange) {
        Boss->MidRangeAttack(Target);
        return EBTNodeResult::Succeeded;
    }
    return EBTNodeResult::Failed;
}
