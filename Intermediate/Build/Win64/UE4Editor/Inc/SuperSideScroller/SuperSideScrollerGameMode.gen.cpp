// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/SuperSideScrollerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSideScrollerGameMode() {}
// Cross Module References
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScrollerGameMode_NoRegister();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScrollerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void ASuperSideScrollerGameMode::StaticRegisterNativesASuperSideScrollerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASuperSideScrollerGameMode_NoRegister()
	{
		return ASuperSideScrollerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSideScrollerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SuperSideScrollerGameMode.h" },
		{ "ModuleRelativePath", "SuperSideScrollerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSideScrollerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::ClassParams = {
		&ASuperSideScrollerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperSideScrollerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuperSideScrollerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperSideScrollerGameMode, 3607865403);
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<ASuperSideScrollerGameMode>()
	{
		return ASuperSideScrollerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperSideScrollerGameMode(Z_Construct_UClass_ASuperSideScrollerGameMode, &ASuperSideScrollerGameMode::StaticClass, TEXT("/Script/SuperSideScroller"), TEXT("ASuperSideScrollerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSideScrollerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
