// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BossCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef RECUPEROESAME_BossCharacter_generated_h
#error "BossCharacter.generated.h already included, missing '#pragma once' in BossCharacter.h"
#endif
#define RECUPEROESAME_BossCharacter_generated_h

#define FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMidRangeAttack); \
	DECLARE_FUNCTION(execMeleeAttack);


#define FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossCharacter(); \
	friend struct Z_Construct_UClass_ABossCharacter_Statics; \
public: \
	DECLARE_CLASS(ABossCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RecuperoEsame"), NO_API) \
	DECLARE_SERIALIZER(ABossCharacter)


#define FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABossCharacter(ABossCharacter&&); \
	ABossCharacter(const ABossCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossCharacter) \
	NO_API virtual ~ABossCharacter();


#define FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_10_PROLOG
#define FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RECUPEROESAME_API UClass* StaticClass<class ABossCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
