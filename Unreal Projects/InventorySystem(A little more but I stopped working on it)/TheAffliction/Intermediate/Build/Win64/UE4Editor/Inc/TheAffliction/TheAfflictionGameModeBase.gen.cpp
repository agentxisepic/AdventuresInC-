// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/TheAfflictionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheAfflictionGameModeBase() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_ATheAfflictionGameModeBase_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_ATheAfflictionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void ATheAfflictionGameModeBase::StaticRegisterNativesATheAfflictionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATheAfflictionGameModeBase_NoRegister()
	{
		return ATheAfflictionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATheAfflictionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheAfflictionGameModeBase.h" },
		{ "ModuleRelativePath", "TheAfflictionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheAfflictionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::ClassParams = {
		&ATheAfflictionGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheAfflictionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheAfflictionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheAfflictionGameModeBase, 2188463937);
	template<> THEAFFLICTION_API UClass* StaticClass<ATheAfflictionGameModeBase>()
	{
		return ATheAfflictionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheAfflictionGameModeBase(Z_Construct_UClass_ATheAfflictionGameModeBase, &ATheAfflictionGameModeBase::StaticClass, TEXT("/Script/TheAffliction"), TEXT("ATheAfflictionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheAfflictionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
