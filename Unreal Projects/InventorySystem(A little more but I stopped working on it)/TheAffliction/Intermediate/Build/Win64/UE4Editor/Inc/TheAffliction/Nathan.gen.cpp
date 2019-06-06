// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/Nathan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNathan() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_ANathan_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_ANathan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void ANathan::StaticRegisterNativesANathan()
	{
	}
	UClass* Z_Construct_UClass_ANathan_NoRegister()
	{
		return ANathan::StaticClass();
	}
	struct Z_Construct_UClass_ANathan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastKeyPressGreaterThan2_MetaData[];
#endif
		static void NewProp_bLastKeyPressGreaterThan2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastKeyPressGreaterThan2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANathan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANathan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nathan.h" },
		{ "ModuleRelativePath", "Nathan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2_MetaData[] = {
		{ "Category", "Nathan" },
		{ "ModuleRelativePath", "Nathan.h" },
	};
#endif
	void Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2_SetBit(void* Obj)
	{
		((ANathan*)Obj)->bLastKeyPressGreaterThan2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2 = { "bLastKeyPressGreaterThan2", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANathan), &Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANathan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANathan_Statics::NewProp_bLastKeyPressGreaterThan2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANathan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANathan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANathan_Statics::ClassParams = {
		&ANathan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANathan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ANathan_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANathan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANathan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANathan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANathan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANathan, 2397766311);
	template<> THEAFFLICTION_API UClass* StaticClass<ANathan>()
	{
		return ANathan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANathan(Z_Construct_UClass_ANathan, &ANathan::StaticClass, TEXT("/Script/TheAffliction"), TEXT("ANathan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANathan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
