// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem2/Public/AbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTypes() {}
// Cross Module References
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_AAbilityTypes_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_AAbilityTypes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem2();
// End Cross Module References
	void AAbilityTypes::StaticRegisterNativesAAbilityTypes()
	{
	}
	UClass* Z_Construct_UClass_AAbilityTypes_NoRegister()
	{
		return AAbilityTypes::StaticClass();
	}
	struct Z_Construct_UClass_AAbilityTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbilityTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTypes.h" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbilityTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilityTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbilityTypes_Statics::ClassParams = {
		&AAbilityTypes::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AAbilityTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbilityTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbilityTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbilityTypes, 3467563402);
	template<> ABILITYSYSTEM2_API UClass* StaticClass<AAbilityTypes>()
	{
		return AAbilityTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbilityTypes(Z_Construct_UClass_AAbilityTypes, &AAbilityTypes::StaticClass, TEXT("/Script/AbilitySystem2"), TEXT("AAbilityTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilityTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
