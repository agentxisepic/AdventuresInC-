// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/Weapon_Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Item() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_AWeapon_Item_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AWeapon_Item();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void AWeapon_Item::StaticRegisterNativesAWeapon_Item()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_Item_NoRegister()
	{
		return AWeapon_Item::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Item_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_Item.h" },
		{ "ModuleRelativePath", "Weapon_Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Item_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon_Item" },
		{ "ModuleRelativePath", "Weapon_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Item_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Item, Damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Item_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Item_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Item_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Item_Statics::ClassParams = {
		&AWeapon_Item::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Item_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWeapon_Item_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Item_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Item, 872733324);
	template<> THEAFFLICTION_API UClass* StaticClass<AWeapon_Item>()
	{
		return AWeapon_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Item(Z_Construct_UClass_AWeapon_Item, &AWeapon_Item::StaticClass, TEXT("/Script/TheAffliction"), TEXT("AWeapon_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
