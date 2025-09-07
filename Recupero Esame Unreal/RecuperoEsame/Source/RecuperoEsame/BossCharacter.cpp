// Fill out your copyright notice in the Description page of Project Settings.


#include "BossCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
ABossCharacter::ABossCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
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


