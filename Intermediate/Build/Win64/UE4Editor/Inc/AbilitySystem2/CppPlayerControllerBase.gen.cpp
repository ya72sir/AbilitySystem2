// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem2/Public/CppPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppPlayerControllerBase() {}
// Cross Module References
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_ACppPlayerControllerBase_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_ACppPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem2();
// End Cross Module References
	void ACppPlayerControllerBase::StaticRegisterNativesACppPlayerControllerBase()
	{
	}
	UClass* Z_Construct_UClass_ACppPlayerControllerBase_NoRegister()
	{
		return ACppPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ACppPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CppPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/CppPlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACppPlayerControllerBase_Statics::ClassParams = {
		&ACppPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACppPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACppPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACppPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACppPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACppPlayerControllerBase, 4203294827);
	template<> ABILITYSYSTEM2_API UClass* StaticClass<ACppPlayerControllerBase>()
	{
		return ACppPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppPlayerControllerBase(Z_Construct_UClass_ACppPlayerControllerBase, &ACppPlayerControllerBase::StaticClass, TEXT("/Script/AbilitySystem2"), TEXT("ACppPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
