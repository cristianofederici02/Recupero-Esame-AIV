// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/BTTask_ChoosePatrolLocation.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChoosePatrolLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTTask_ChoosePatrolLocation();
RECUPEROESAME_API UClass* Z_Construct_UClass_UBTTask_ChoosePatrolLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Class UBTTask_ChoosePatrolLocation
void UBTTask_ChoosePatrolLocation::StaticRegisterNativesUBTTask_ChoosePatrolLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChoosePatrolLocation);
UClass* Z_Construct_UClass_UBTTask_ChoosePatrolLocation_NoRegister()
{
	return UBTTask_ChoosePatrolLocation::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_ChoosePatrolLocation.h" },
		{ "ModuleRelativePath", "BTTask_ChoosePatrolLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolLocationKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_ChoosePatrolLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolLocationKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChoosePatrolLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::NewProp_PatrolLocationKey = { "PatrolLocationKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ChoosePatrolLocation, PatrolLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolLocationKey_MetaData), NewProp_PatrolLocationKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::NewProp_PatrolLocationKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_RecuperoEsame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::ClassParams = {
	&UBTTask_ChoosePatrolLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ChoosePatrolLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChoosePatrolLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChoosePatrolLocation.OuterSingleton, Z_Construct_UClass_UBTTask_ChoosePatrolLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChoosePatrolLocation.OuterSingleton;
}
template<> RECUPEROESAME_API UClass* StaticClass<UBTTask_ChoosePatrolLocation>()
{
	return UBTTask_ChoosePatrolLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChoosePatrolLocation);
UBTTask_ChoosePatrolLocation::~UBTTask_ChoosePatrolLocation() {}
// End Class UBTTask_ChoosePatrolLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_ChoosePatrolLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChoosePatrolLocation, UBTTask_ChoosePatrolLocation::StaticClass, TEXT("UBTTask_ChoosePatrolLocation"), &Z_Registration_Info_UClass_UBTTask_ChoosePatrolLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChoosePatrolLocation), 1661852535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_ChoosePatrolLocation_h_2756587410(TEXT("/Script/RecuperoEsame"),
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_ChoosePatrolLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BTTask_ChoosePatrolLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
