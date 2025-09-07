// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BossStates.h"
#include "BossCharacter.generated.h"

UCLASS()
class RECUPEROESAME_API ABossCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABossCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

    UFUNCTION(BlueprintCallable, Category = "Boss|Combat")
    void MeleeAttack(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Boss|Combat")
    void MidRangeAttack(AActor* Target);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Combat")
    float MeleeRange = 200.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Combat")
    float MidRange = 800.f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    class UAIPerceptionComponent* AIPerceptionComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    class UAISenseConfig_Sight* SightConfig;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    class UAISenseConfig_Hearing* HearingConfig;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Combat")
    float AttackDamage = 30.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Combat")
    float AttackCooldown = 2.f;

    bool bCanAttack = true;

    void ResetAttackCooldown();

private:
    FTimerHandle AttackCooldownHandle;
};

