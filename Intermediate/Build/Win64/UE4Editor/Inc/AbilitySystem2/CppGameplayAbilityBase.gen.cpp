// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem2/Public/CppGameplayAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGameplayAbilityBase() {}
// Cross Module References
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_UCppGameplayAbilityBase_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_UCppGameplayAbilityBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem2();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void UCppGameplayAbilityBase::StaticRegisterNativesUCppGameplayAbilityBase()
	{
	}
	UClass* Z_Construct_UClass_UCppGameplayAbilityBase_NoRegister()
	{
		return UCppGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UCppGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CppGameplayAbilityBase.h" },
		{ "ModuleRelativePath", "Public/CppGameplayAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Public/CppGameplayAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCppGameplayAbilityBase_Statics::NewProp_UIMaterial = { "UIMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppGameplayAbilityBase, UIMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCppGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppGameplayAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameplayAbilityBase_Statics::NewProp_UIMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppGameplayAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCppGameplayAbilityBase_Statics::ClassParams = {
		&UCppGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCppGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCppGameplayAbilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameplayAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCppGameplayAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCppGameplayAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCppGameplayAbilityBase, 1206688523);
	template<> ABILITYSYSTEM2_API UClass* StaticClass<UCppGameplayAbilityBase>()
	{
		return UCppGameplayAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCppGameplayAbilityBase(Z_Construct_UClass_UCppGameplayAbilityBase, &UCppGameplayAbilityBase::StaticClass, TEXT("/Script/AbilitySystem2"), TEXT("UCppGameplayAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppGameplayAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
