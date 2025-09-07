#include "BTTask_ChoosePatrolLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"

UBTTask_ChoosePatrolLocation::UBTTask_ChoosePatrolLocation() {
    NodeName = TEXT("Choose Patrol Location");
}

EBTNodeResult::Type UBTTask_ChoosePatrolLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8*) {
    UWorld* World = OwnerComp.GetWorld();
    if (!World) return EBTNodeResult::Failed;

    TArray<AActor*> Points;
    UGameplayStatics::GetAllActorsOfClass(World, ATargetPoint::StaticClass(), Points);
    if (Points.Num() == 0) return EBTNodeResult::Failed;

    AActor* Pick = Points[FMath::RandRange(0, Points.Num() - 1)];
    if (UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent()) {
        BB->SetValueAsVector(PatrolLocationKey.SelectedKeyName, Pick->GetActorLocation());
        return EBTNodeResult::Succeeded;
    }
    return EBTNodeResult::Failed;
}
