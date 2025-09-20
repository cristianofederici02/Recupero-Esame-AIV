// Fill out your copyright notice in the Description page of Project Settings.


#include "BossCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


ABossCharacter::ABossCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABossCharacter::MeleeAttack(AActor* Target)
{
    if (!Target || !bCanAttack) return;

    UE_LOG(LogTemp, Warning, TEXT("Boss fa attacco ravvicinato!"));
    UGameplayStatics::ApplyDamage(Target, AttackDamage, GetController(), this, nullptr);
    bCanAttack = false;

    GetWorld()->GetTimerManager().SetTimer(AttackCooldownHandle, this, &ABossCharacter::ResetAttackCooldown, AttackCooldown, false);
}

void ABossCharacter::MidRangeAttack(AActor* Target)
{
    if (!Target || !bCanAttack) return;

    UE_LOG(LogTemp, Warning, TEXT("Boss fa attacco a media distanza!"));
    UGameplayStatics::ApplyDamage(Target, AttackDamage, GetController(), this, nullptr);
    bCanAttack = false;

    GetWorld()->GetTimerManager().SetTimer(AttackCooldownHandle, this, &ABossCharacter::ResetAttackCooldown, AttackCooldown, false);
}

void ABossCharacter::ResetAttackCooldown()
{
    bCanAttack = true;
}


