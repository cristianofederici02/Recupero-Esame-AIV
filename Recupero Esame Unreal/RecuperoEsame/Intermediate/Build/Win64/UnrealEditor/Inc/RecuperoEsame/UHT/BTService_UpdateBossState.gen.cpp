// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/BTService_UpdateBossState.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateBossState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTService_UpdateBossState();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTService_UpdateBossState_NoRegister();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Class UBTService_UpdateBossState
void UBTService_UpdateBossState::StaticRegisterNativesUBTService_UpdateBossState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UpdateBossState);
UClass* Z_Construct_UClass_UBTService_UpdateBossState_NoRegister()
{
	return UBTService_UpdateBossState::StaticClass();
}
struct Z_Construct_UClass_UBTService_UpdateBossState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_UpdateBossState.h" },
		{ "ModuleRelativePath", "BTService_UpdateBossState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTService_UpdateBossState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossStateKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTService_UpdateBossState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BossStateKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateBossState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateBossState_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateBossState, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateBossState_Statics::NewProp_BossStateKey = { "BossStateKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateBossState, BossStateKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossStateKey_MetaData), NewProp_BossStateKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateBossState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateBossState_Statics::NewProp_TargetActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateBossState_Statics::NewProp_BossStateKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateBossState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_UpdateBossState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_RecuperoEsame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateBossState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateBossState_Statics::ClassParams = {
	&UBTService_UpdateBossState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_UpdateBossState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateBossState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateBossState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateBossState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_UpdateBossState()
{
	if (!Z_Registration_Info_UClass_UBTService_UpdateBossState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateBossState.OuterSingleton, Z_Construct_UClass_UBTService_UpdateBossState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_UpdateBossState.OuterSingleton;
}
template<> RECUPEROESAME_API UClass* StaticClass<UBTService_UpdateBossState>()
{
	return UBTService_UpdateBossState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateBossState);
UBTService_UpdateBossState::~UBTService_UpdateBossState() {}
// End Class UBTService_UpdateBossState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTService_UpdateBossState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateBossState, UBTService_UpdateBossState::StaticClass, TEXT("UBTService_UpdateBossState"), &Z_Registration_Info_UClass_UBTService_UpdateBossState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateBossState), 4142631925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTService_UpdateBossState_h_3220141927(TEXT("/Script/RecuperoEsame"),
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTService_UpdateBossState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTService_UpdateBossState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
