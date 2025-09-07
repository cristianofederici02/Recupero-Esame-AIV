#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AttackSelector.generated.h"

UCLASS()
class RECUPEROESAME_API UBTTask_AttackSelector : public UBTTaskNode 
{
	GENERATED_BODY()
public:
	UBTTask_AttackSelector();

public:
	UPROPERTY(EditAnywhere, Category = "Blackboard") FBlackboardKeySelector TargetActorKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
