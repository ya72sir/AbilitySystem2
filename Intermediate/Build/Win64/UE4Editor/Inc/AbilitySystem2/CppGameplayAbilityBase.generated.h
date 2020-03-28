// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityInfo;
#ifdef ABILITYSYSTEM2_CppGameplayAbilityBase_generated_h
#error "CppGameplayAbilityBase.generated.h already included, missing '#pragma once' in CppGameplayAbilityBase.h"
#endif
#define ABILITYSYSTEM2_CppGameplayAbilityBase_generated_h

#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_SPARSE_DATA
#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAbilityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo(); \
		P_NATIVE_END; \
	}


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo(); \
		P_NATIVE_END; \
	}


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppGameplayAbilityBase(); \
	friend struct Z_Construct_UClass_UCppGameplayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UCppGameplayAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(UCppGameplayAbilityBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCppGameplayAbilityBase(); \
	friend struct Z_Construct_UClass_UCppGameplayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UCppGameplayAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(UCppGameplayAbilityBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppGameplayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppGameplayAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppGameplayAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppGameplayAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppGameplayAbilityBase(UCppGameplayAbilityBase&&); \
	NO_API UCppGameplayAbilityBase(const UCppGameplayAbilityBase&); \
public:


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppGameplayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppGameplayAbilityBase(UCppGameplayAbilityBase&&); \
	NO_API UCppGameplayAbilityBase(const UCppGameplayAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppGameplayAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppGameplayAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppGameplayAbilityBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_PRIVATE_PROPERTY_OFFSET
#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_16_PROLOG
#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_RPC_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_INCLASS \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_INCLASS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM2_API UClass* StaticClass<class UCppGameplayAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySys_Source_AbilitySystem2_Public_CppGameplayAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
