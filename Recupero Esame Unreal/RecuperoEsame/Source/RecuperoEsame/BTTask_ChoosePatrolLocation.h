#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChoosePatrolLocation.generated.h"

UCLASS()
class RECUPEROESAME_API UBTTask_ChoosePatrolLocation : public UBTTaskNode {
	GENERATED_BODY()
public:
	UBTTask_ChoosePatrolLocation();

public:
	UPROPERTY(EditAnywhere, Category = "Blackboard") FBlackboardKeySelector PatrolLocationKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

