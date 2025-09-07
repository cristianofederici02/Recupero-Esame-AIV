// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecuperoEsame/BossStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossStates() {}

// Begin Cross Module References
RECUPEROESAME_API UEnum* Z_Construct_UEnum_RecuperoEsame_EBossState();
UPackage* Z_Construct_UPackage__Script_RecuperoEsame();
// End Cross Module References

// Begin Enum EBossState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBossState;
static UEnum* EBossState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBossState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBossState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RecuperoEsame_EBossState, (UObject*)Z_Construct_UPackage__Script_RecuperoEsame(), TEXT("EBossState"));
	}
	return Z_Registration_Info_UEnum_EBossState.OuterSingleton;
}
template<> RECUPEROESAME_API UEnum* StaticEnum<EBossState>()
{
	return EBossState_StaticEnum();
}
struct Z_Construct_UEnum_RecuperoEsame_EBossState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "EBossState::Attack" },
		{ "BlueprintType", "true" },
		{ "Chase.DisplayName", "Chase" },
		{ "Chase.Name", "EBossState::Chase" },
		{ "ModuleRelativePath", "BossStates.h" },
		{ "Patrol.DisplayName", "Patrol" },
		{ "Patrol.Name", "EBossState::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBossState::Patrol", (int64)EBossState::Patrol },
		{ "EBossState::Chase", (int64)EBossState::Chase },
		{ "EBossState::Attack", (int64)EBossState::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RecuperoEsame,
	nullptr,
	"EBossState",
	"EBossState",
	Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RecuperoEsame_EBossState()
{
	if (!Z_Registration_Info_UEnum_EBossState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBossState.InnerSingleton, Z_Construct_UEnum_RecuperoEsame_EBossState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBossState.InnerSingleton;
}
// End Enum EBossState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossStates_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBossState_StaticEnum, TEXT("EBossState"), &Z_Registration_Info_UEnum_EBossState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 937304157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossStates_h_3919524837(TEXT("/Script/RecuperoEsame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unity_Recupero_Esame_Unreal_RecuperoEsame_Source_RecuperoEsame_BossStates_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
