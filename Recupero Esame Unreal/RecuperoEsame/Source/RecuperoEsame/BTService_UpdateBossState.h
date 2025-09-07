#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BossStates.h"
#include "BTService_UpdateBossState.generated.h"

UCLASS()
class RECUPEROESAME_API UBTService_UpdateBossState : public UBTService {
	GENERATED_BODY()
public:
	UBTService_UpdateBossState();

public:
	UPROPERTY(EditAnywhere, Category = "Blackboard") FBlackboardKeySelector TargetActorKey;
	UPROPERTY(EditAnywhere, Category = "Blackboard") FBlackboardKeySelector BossStateKey;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
