// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BossStates.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RECUPEROESAME_BossStates_generated_h
#error "BossStates.generated.h already included, missing '#pragma once' in BossStates.h"
#endif
#define RECUPEROESAME_BossStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossStates_h


#define FOREACH_ENUM_EBOSSSTATE(op) \
	op(EBossState::Patrol) \
	op(EBossState::Chase) \
	op(EBossState::Attack) 

enum class EBossState : uint8;
template<> struct TIsUEnumClass<EBossState> { enum { Value = true }; };
template<> RECUPEROESAME_API UEnum* StaticEnum<EBossState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
