// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/BossCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
RECUPEROESAME_API UClass* Z_Construct_UClass_ABossCharacter();
RECUPEROESAME_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Class ABossCharacter Function MeleeAttack
struct Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics
{
	struct BossCharacter_eventMeleeAttack_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventMeleeAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "MeleeAttack", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::BossCharacter_eventMeleeAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::BossCharacter_eventMeleeAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_MeleeAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_MeleeAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execMeleeAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MeleeAttack(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ABossCharacter Function MeleeAttack

// Begin Class ABossCharacter Function MidRangeAttack
struct Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics
{
	struct BossCharacter_eventMidRangeAttack_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventMidRangeAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "MidRangeAttack", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::BossCharacter_eventMidRangeAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::BossCharacter_eventMidRangeAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_MidRangeAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_MidRangeAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execMidRangeAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MidRangeAttack(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ABossCharacter Function MidRangeAttack

// Begin Class ABossCharacter
void ABossCharacter::StaticRegisterNativesABossCharacter()
{
	UClass* Class = ABossCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MeleeAttack", &ABossCharacter::execMeleeAttack },
		{ "MidRangeAttack", &ABossCharacter::execMidRangeAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossCharacter);
UClass* Z_Construct_UClass_ABossCharacter_NoRegister()
{
	return ABossCharacter::StaticClass();
}
struct Z_Construct_UClass_ABossCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BossCharacter.h" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidRange_MetaData[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Boss|Combat" },
		{ "ModuleRelativePath", "BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MidRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingConfig;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABossCharacter_MeleeAttack, "MeleeAttack" }, // 1826982094
		{ &Z_Construct_UFunction_ABossCharacter_MidRangeAttack, "MidRangeAttack" }, // 497814992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_MidRange = { "MidRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, MidRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidRange_MetaData), NewProp_MidRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_AIPerceptionComp = { "AIPerceptionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, AIPerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComp_MetaData), NewProp_AIPerceptionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_HearingConfig = { "HearingConfig", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, HearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingConfig_MetaData), NewProp_HearingConfig_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABossCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_MeleeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_MidRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_AIPerceptionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_HearingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_AttackCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RecuperoEsame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossCharacter_Statics::ClassParams = {
	&ABossCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABossCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABossCharacter()
{
	if (!Z_Registration_Info_UClass_ABossCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossCharacter.OuterSingleton, Z_Construct_UClass_ABossCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABossCharacter.OuterSingleton;
}
template<> RECUPEROESAME_API UClass* StaticClass<ABossCharacter>()
{
	return ABossCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABossCharacter);
ABossCharacter::~ABossCharacter() {}
// End Class ABossCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 1939596287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_3181420437(TEXT("/Script/RecuperoEsame"),
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
