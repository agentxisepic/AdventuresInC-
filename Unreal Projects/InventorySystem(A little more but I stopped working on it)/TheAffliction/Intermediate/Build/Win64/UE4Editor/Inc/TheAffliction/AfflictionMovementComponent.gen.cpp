// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheAffliction/AfflictionMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAfflictionMovementComponent() {}
// Cross Module References
	THEAFFLICTION_API UClass* Z_Construct_UClass_UAfflictionMovementComponent_NoRegister();
	THEAFFLICTION_API UClass* Z_Construct_UClass_UAfflictionMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheAffliction();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_Sprint();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle();
	THEAFFLICTION_API UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_Walk();
// End Cross Module References
	void UAfflictionMovementComponent::StaticRegisterNativesUAfflictionMovementComponent()
	{
		UClass* Class = UAfflictionMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerStamina", &UAfflictionMovementComponent::execGetPlayerStamina },
			{ "Sprint", &UAfflictionMovementComponent::execSprint },
			{ "StaminaHandle", &UAfflictionMovementComponent::execStaminaHandle },
			{ "Walk", &UAfflictionMovementComponent::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics
	{
		struct AfflictionMovementComponent_eventGetPlayerStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionMovementComponent_eventGetPlayerStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAfflictionMovementComponent, nullptr, "GetPlayerStamina", sizeof(AfflictionMovementComponent_eventGetPlayerStamina_Parms), Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics
	{
		struct AfflictionMovementComponent_eventSprint_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionMovementComponent_eventSprint_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAfflictionMovementComponent, nullptr, "Sprint", sizeof(AfflictionMovementComponent_eventSprint_Parms), Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAfflictionMovementComponent_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics
	{
		struct AfflictionMovementComponent_eventStaminaHandle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AfflictionMovementComponent_eventStaminaHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AfflictionMovementComponent_eventStaminaHandle_Parms), &Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAfflictionMovementComponent, nullptr, "StaminaHandle", sizeof(AfflictionMovementComponent_eventStaminaHandle_Parms), Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics
	{
		struct AfflictionMovementComponent_eventWalk_Parms
		{
			float AxisValue;
			FString DirectionIdentifier;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectionIdentifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::NewProp_DirectionIdentifier = { "DirectionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionMovementComponent_eventWalk_Parms, DirectionIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfflictionMovementComponent_eventWalk_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::NewProp_DirectionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AfflictionMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAfflictionMovementComponent, nullptr, "Walk", sizeof(AfflictionMovementComponent_eventWalk_Parms), Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAfflictionMovementComponent_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAfflictionMovementComponent_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAfflictionMovementComponent_NoRegister()
	{
		return UAfflictionMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAfflictionMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAfflictionMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheAffliction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAfflictionMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAfflictionMovementComponent_GetPlayerStamina, "GetPlayerStamina" }, // 3837352226
		{ &Z_Construct_UFunction_UAfflictionMovementComponent_Sprint, "Sprint" }, // 716462021
		{ &Z_Construct_UFunction_UAfflictionMovementComponent_StaminaHandle, "StaminaHandle" }, // 2485331158
		{ &Z_Construct_UFunction_UAfflictionMovementComponent_Walk, "Walk" }, // 1137087274
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAfflictionMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AfflictionMovementComponent.h" },
		{ "ModuleRelativePath", "AfflictionMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAfflictionMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAfflictionMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAfflictionMovementComponent_Statics::ClassParams = {
		&UAfflictionMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAfflictionMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAfflictionMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAfflictionMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAfflictionMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAfflictionMovementComponent, 1484621202);
	template<> THEAFFLICTION_API UClass* StaticClass<UAfflictionMovementComponent>()
	{
		return UAfflictionMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAfflictionMovementComponent(Z_Construct_UClass_UAfflictionMovementComponent, &UAfflictionMovementComponent::StaticClass, TEXT("/Script/TheAffliction"), TEXT("UAfflictionMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAfflictionMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
