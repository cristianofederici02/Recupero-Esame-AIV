// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/RecuperoEsameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecuperoEsameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RECUPEROESAME_API UClass* Z_Construct_UClass_ARecuperoEsameGameMode();
RECUPEROESAME_API UClass* Z_Construct_UClass_ARecuperoEsameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Class ARecuperoEsameGameMode
void ARecuperoEsameGameMode::StaticRegisterNativesARecuperoEsameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecuperoEsameGameMode);
UClass* Z_Construct_UClass_ARecuperoEsameGameMode_NoRegister()
{
	return ARecuperoEsameGameMode::StaticClass();
}
struct Z_Construct_UClass_ARecuperoEsameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RecuperoEsameGameMode.h" },
		{ "ModuleRelativePath", "RecuperoEsameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecuperoEsameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARecuperoEsameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RecuperoEsame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARecuperoEsameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecuperoEsameGameMode_Statics::ClassParams = {
	&ARecuperoEsameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARecuperoEsameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARecuperoEsameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARecuperoEsameGameMode()
{
	if (!Z_Registration_Info_UClass_ARecuperoEsameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecuperoEsameGameMode.OuterSingleton, Z_Construct_UClass_ARecuperoEsameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARecuperoEsameGameMode.OuterSingleton;
}
template<> RECUPEROESAME_API UClass* StaticClass<ARecuperoEsameGameMode>()
{
	return ARecuperoEsameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARecuperoEsameGameMode);
ARecuperoEsameGameMode::~ARecuperoEsameGameMode() {}
// End Class ARecuperoEsameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_RecuperoEsameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARecuperoEsameGameMode, ARecuperoEsameGameMode::StaticClass, TEXT("ARecuperoEsameGameMode"), &Z_Registration_Info_UClass_ARecuperoEsameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecuperoEsameGameMode), 917216604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_RecuperoEsameGameMode_h_3422467074(TEXT("/Script/RecuperoEsame"),
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_RecuperoEsameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_RecuperoEsameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
