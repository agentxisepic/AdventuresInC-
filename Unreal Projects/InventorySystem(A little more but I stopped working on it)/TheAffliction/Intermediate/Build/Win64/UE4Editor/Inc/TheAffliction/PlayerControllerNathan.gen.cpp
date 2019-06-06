// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/PlayerControllerNathan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerNathan() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_APlayerControllerNathan_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_APlayerControllerNathan();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerControllerNathan_StartSprint();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_APlayerControllerNathan_StopSprint();
// End Cross Module References
	void APlayerControllerNathan::StaticRegisterNativesAPlayerControllerNathan()
	{
		UClass* Class = APlayerControllerNathan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForwardBackward", &APlayerControllerNathan::execMoveForwardBackward },
			{ "MoveLeftRight", &APlayerControllerNathan::execMoveLeftRight },
			{ "StartSprint", &APlayerControllerNathan::execStartSprint },
			{ "StopSprint", &APlayerControllerNathan::execStopSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics
	{
		struct PlayerControllerNathan_eventMoveForwardBackward_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerControllerNathan_eventMoveForwardBackward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
		{ "ToolTip", "Functions responsible for moving the player in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerNathan, nullptr, "MoveForwardBackward", sizeof(PlayerControllerNathan_eventMoveForwardBackward_Parms), Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics
	{
		struct PlayerControllerNathan_eventMoveLeftRight_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerControllerNathan_eventMoveLeftRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerNathan, nullptr, "MoveLeftRight", sizeof(PlayerControllerNathan_eventMoveLeftRight_Parms), Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerNathan, nullptr, "StartSprint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerNathan_StartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerNathan_StartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerNathan, nullptr, "StopSprint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerNathan_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerNathan_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerControllerNathan_NoRegister()
	{
		return APlayerControllerNathan::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerNathan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerMovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerNathan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerControllerNathan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerControllerNathan_MoveForwardBackward, "MoveForwardBackward" }, // 795196792
		{ &Z_Construct_UFunction_APlayerControllerNathan_MoveLeftRight, "MoveLeftRight" }, // 1789016920
		{ &Z_Construct_UFunction_APlayerControllerNathan_StartSprint, "StartSprint" }, // 1385760756
		{ &Z_Construct_UFunction_APlayerControllerNathan_StopSprint, "StopSprint" }, // 2628452001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerNathan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerControllerNathan.h" },
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
		{ "ToolTip", "The modified player controller probably to be used for most of the game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerNathan_Statics::NewProp_PlayerMovementSpeed_MetaData[] = {
		{ "Category", "PlayerControllerNathan" },
		{ "ModuleRelativePath", "PlayerControllerNathan.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerControllerNathan_Statics::NewProp_PlayerMovementSpeed = { "PlayerMovementSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerControllerNathan, PlayerMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerControllerNathan_Statics::NewProp_PlayerMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerControllerNathan_Statics::NewProp_PlayerMovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerNathan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerNathan_Statics::NewProp_PlayerMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerNathan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerNathan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerNathan_Statics::ClassParams = {
		&APlayerControllerNathan::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerControllerNathan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayerControllerNathan_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerNathan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerControllerNathan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerNathan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerControllerNathan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerNathan, 1555527807);
	template<> THEAFFLICTION_API UClass* StaticClass<APlayerControllerNathan>()
	{
		return APlayerControllerNathan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerNathan(Z_Construct_UClass_APlayerControllerNathan, &APlayerControllerNathan::StaticClass, TEXT("/Script/TheAffliction"), TEXT("APlayerControllerNathan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerNathan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
