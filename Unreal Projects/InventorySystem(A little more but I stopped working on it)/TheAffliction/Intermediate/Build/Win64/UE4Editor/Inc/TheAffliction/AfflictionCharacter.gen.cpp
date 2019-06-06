// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/AfflictionCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAfflictionCharacter() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_AAfflictionCharacter_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AAfflictionCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void AAfflictionCharacter::StaticRegisterNativesAAfflictionCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAfflictionCharacter_NoRegister()
	{
		return AAfflictionCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAfflictionCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAfflictionCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAfflictionCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AfflictionCharacter.h" },
		{ "ModuleRelativePath", "AfflictionCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAfflictionCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAfflictionCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAfflictionCharacter_Statics::ClassParams = {
		&AAfflictionCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAfflictionCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAfflictionCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAfflictionCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAfflictionCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAfflictionCharacter, 3154576363);
	template<> THEAFFLICTION_API UClass* StaticClass<AAfflictionCharacter>()
	{
		return AAfflictionCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAfflictionCharacter(Z_Construct_UClass_AAfflictionCharacter, &AAfflictionCharacter::StaticClass, TEXT("/Script/TheAffliction"), TEXT("AAfflictionCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAfflictionCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
