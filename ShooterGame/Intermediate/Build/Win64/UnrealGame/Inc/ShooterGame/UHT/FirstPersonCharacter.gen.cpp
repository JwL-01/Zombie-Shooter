// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "FirstPersonCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton;
	}
	template<> SHOOTERGAME_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
	AFirstPersonCharacter::~AFirstPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_ShooterGame_Source_ShooterGame_FirstPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterGame_Source_ShooterGame_FirstPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 1847537992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterGame_Source_ShooterGame_FirstPersonCharacter_h_1473383930(TEXT("/Script/ShooterGame"),
		Z_CompiledInDeferFile_FID_ShooterGame_Source_ShooterGame_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterGame_Source_ShooterGame_FirstPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
