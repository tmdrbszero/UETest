// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSideScroller/SuperSideScroller_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSideScroller_Player() {}
// Cross Module References
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Player_NoRegister();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScroller_Player();
	SUPERSIDESCROLLER_API UClass* Z_Construct_UClass_ASuperSideScrollerCharacter();
	UPackage* Z_Construct_UPackage__Script_SuperSideScroller();
// End Cross Module References
	void ASuperSideScroller_Player::StaticRegisterNativesASuperSideScroller_Player()
	{
	}
	UClass* Z_Construct_UClass_ASuperSideScroller_Player_NoRegister()
	{
		return ASuperSideScroller_Player::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSideScroller_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSideScroller_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASuperSideScrollerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SuperSideScroller_Player.h" },
		{ "ModuleRelativePath", "SuperSideScroller_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSideScroller_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSideScroller_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuperSideScroller_Player_Statics::ClassParams = {
		&ASuperSideScroller_Player::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSideScroller_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperSideScroller_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuperSideScroller_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperSideScroller_Player, 1437112548);
	template<> SUPERSIDESCROLLER_API UClass* StaticClass<ASuperSideScroller_Player>()
	{
		return ASuperSideScroller_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperSideScroller_Player(Z_Construct_UClass_ASuperSideScroller_Player, &ASuperSideScroller_Player::StaticClass, TEXT("/Script/SuperSideScroller"), TEXT("ASuperSideScroller_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSideScroller_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
