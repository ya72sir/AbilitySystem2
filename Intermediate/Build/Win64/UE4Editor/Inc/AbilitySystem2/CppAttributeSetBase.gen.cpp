// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem2/Public/CppAttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppAttributeSetBase() {}
// Cross Module References
	ABILITYSYSTEM2_API UFunction* Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem2();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_UCppAttributeSetBase_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_UCppAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms
		{
			float Health;
			float MaxHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CppAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilitySystem2, "OnHealthChangeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms), Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilitySystem2_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCppAttributeSetBase::StaticRegisterNativesUCppAttributeSetBase()
	{
	}
	UClass* Z_Construct_UClass_UCppAttributeSetBase_NoRegister()
	{
		return UCppAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UCppAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CppAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/CppAttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/CppAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_MaxHealth = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCppAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/CppAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Struct, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCppAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppAttributeSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppAttributeSetBase_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCppAttributeSetBase_Statics::ClassParams = {
		&UCppAttributeSetBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCppAttributeSetBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCppAttributeSetBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCppAttributeSetBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCppAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCppAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCppAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCppAttributeSetBase, 321266420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCppAttributeSetBase(Z_Construct_UClass_UCppAttributeSetBase, &UCppAttributeSetBase::StaticClass, TEXT("/Script/AbilitySystem2"), TEXT("UCppAttributeSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
