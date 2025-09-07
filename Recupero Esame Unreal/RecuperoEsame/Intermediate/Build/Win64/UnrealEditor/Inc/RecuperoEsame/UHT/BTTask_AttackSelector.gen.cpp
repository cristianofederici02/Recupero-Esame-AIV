// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/BTTask_AttackSelector.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AttackSelector() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTTask_AttackSelector();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTTask_AttackSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Class UBTTask_AttackSelector
void UBTTask_AttackSelector::StaticRegisterNativesUBTTask_AttackSelector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AttackSelector);
UClass* Z_Construct_UClass_UBTTask_AttackSelector_NoRegister()
{
	return UBTTask_AttackSelector::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AttackSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_AttackSelector.h" },
		{ "ModuleRelativePath", "BTTask_AttackSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_AttackSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AttackSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackSelector_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackSelector, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_AttackSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackSelector_Statics::NewProp_TargetActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_AttackSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_RecuperoEsame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AttackSelector_Statics::ClassParams = {
	&UBTTask_AttackSelector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_AttackSelector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSelector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AttackSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AttackSelector()
{
	if (!Z_Registration_Info_UClass_UBTTask_AttackSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AttackSelector.OuterSingleton, Z_Construct_UClass_UBTTask_AttackSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AttackSelector.OuterSingleton;
}
template<> RECUPEROESAME_API UClass* StaticClass<UBTTask_AttackSelector>()
{
	return UBTTask_AttackSelector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AttackSelector);
UBTTask_AttackSelector::~UBTTask_AttackSelector() {}
// End Class UBTTask_AttackSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_AttackSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AttackSelector, UBTTask_AttackSelector::StaticClass, TEXT("UBTTask_AttackSelector"), &Z_Registration_Info_UClass_UBTTask_AttackSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AttackSelector), 2126146653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_AttackSelector_h_3141548807(TEXT("/Script/RecuperoEsame"),
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_AttackSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_AttackSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
