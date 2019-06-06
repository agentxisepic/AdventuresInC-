// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/Medical_Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMedical_Item() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_AMedical_Item_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AMedical_Item();
	THEAFFLICTION_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
// End Cross Module References
	void AMedical_Item::StaticRegisterNativesAMedical_Item()
	{
	}
	UClass* Z_Construct_UClass_AMedical_Item_NoRegister()
	{
		return AMedical_Item::StaticClass();
	}
	struct Z_Construct_UClass_AMedical_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedAttributeToDebuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AffectedAttributeToDebuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedAttributeToBuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AffectedAttributeToBuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToDebuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountToDebuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToBuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountToBuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountToHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDebuff_MetaData[];
#endif
		static void NewProp_bCanDebuff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDebuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBuff_MetaData[];
#endif
		static void NewProp_bCanBuff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHeal_MetaData[];
#endif
		static void NewProp_bCanHeal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHeal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMedical_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Medical_Item.h" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToDebuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToDebuff = { "AffectedAttributeToDebuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedical_Item, AffectedAttributeToDebuff), METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToDebuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToDebuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToBuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToBuff = { "AffectedAttributeToBuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedical_Item, AffectedAttributeToBuff), METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToBuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToBuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToDebuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToDebuff = { "AmountToDebuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedical_Item, AmountToDebuff), METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToDebuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToDebuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToBuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToBuff = { "AmountToBuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedical_Item, AmountToBuff), METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToBuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToBuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToHeal_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToHeal = { "AmountToHeal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedical_Item, AmountToHeal), METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToHeal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	void Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff_SetBit(void* Obj)
	{
		((AMedical_Item*)Obj)->bCanDebuff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff = { "bCanDebuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMedical_Item), &Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	void Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff_SetBit(void* Obj)
	{
		((AMedical_Item*)Obj)->bCanBuff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff = { "bCanBuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMedical_Item), &Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal_MetaData[] = {
		{ "Category", "Medical_Item" },
		{ "ModuleRelativePath", "Medical_Item.h" },
	};
#endif
	void Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal_SetBit(void* Obj)
	{
		((AMedical_Item*)Obj)->bCanHeal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal = { "bCanHeal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMedical_Item), &Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMedical_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToDebuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_AffectedAttributeToBuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToDebuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToBuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_AmountToHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanDebuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanBuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedical_Item_Statics::NewProp_bCanHeal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMedical_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMedical_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMedical_Item_Statics::ClassParams = {
		&AMedical_Item::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMedical_Item_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMedical_Item_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMedical_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMedical_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMedical_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMedical_Item, 3420221453);
	template<> THEAFFLICTION_API UClass* StaticClass<AMedical_Item>()
	{
		return AMedical_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMedical_Item(Z_Construct_UClass_AMedical_Item, &AMedical_Item::StaticClass, TEXT("/Script/TheAffliction"), TEXT("AMedical_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMedical_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
