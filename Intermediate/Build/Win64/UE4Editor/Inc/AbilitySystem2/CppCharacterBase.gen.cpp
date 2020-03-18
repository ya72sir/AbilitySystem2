// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem2/Public/CppCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppCharacterBase() {}
// Cross Module References
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_ACppCharacterBase_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_ACppCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem2();
	ABILITYSYSTEM2_API UFunction* Z_Construct_UFunction_ACppCharacterBase_AquireAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ABILITYSYSTEM2_API UClass* Z_Construct_UClass_UCppAttributeSetBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void ACppCharacterBase::StaticRegisterNativesACppCharacterBase()
	{
		UClass* Class = ACppCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AquireAbility", &ACppCharacterBase::execAquireAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics
	{
		struct CppCharacterBase_eventAquireAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityToAquire;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityToAquire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::NewProp_AbilityToAquire = { UE4CodeGen_Private::EPropertyClass::Class, "AbilityToAquire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CppCharacterBase_eventAquireAbility_Parms, AbilityToAquire), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::NewProp_AbilityToAquire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/CppCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACppCharacterBase, "AquireAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CppCharacterBase_eventAquireAbility_Parms), Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACppCharacterBase_AquireAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACppCharacterBase_AquireAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACppCharacterBase_NoRegister()
	{
		return ACppCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACppCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACppCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACppCharacterBase_AquireAbility, "AquireAbility" }, // 3802016444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CppCharacterBase.h" },
		{ "ModuleRelativePath", "Public/CppCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AttributeBase_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CppCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AttributeBase = { UE4CodeGen_Private::EPropertyClass::Object, "AttributeBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ACppCharacterBase, AttributeBase), Z_Construct_UClass_UCppAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AttributeBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AttributeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AbilitySystemComp_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CppCharacterBase.h" },
		{ "ToolTip", "Our ability system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AbilitySystemComp = { UE4CodeGen_Private::EPropertyClass::Object, "AbilitySystemComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ACppCharacterBase, AbilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AbilitySystemComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AbilitySystemComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACppCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AttributeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppCharacterBase_Statics::NewProp_AbilitySystemComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACppCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACppCharacterBase, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACppCharacterBase_Statics::ClassParams = {
		&ACppCharacterBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACppCharacterBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACppCharacterBase_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ACppCharacterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACppCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACppCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACppCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACppCharacterBase, 905285058);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppCharacterBase(Z_Construct_UClass_ACppCharacterBase, &ACppCharacterBase::StaticClass, TEXT("/Script/AbilitySystem2"), TEXT("ACppCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
