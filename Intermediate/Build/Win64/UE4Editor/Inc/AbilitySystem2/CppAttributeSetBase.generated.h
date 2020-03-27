// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYSYSTEM2_CppAttributeSetBase_generated_h
#error "CppAttributeSetBase.generated.h already included, missing '#pragma once' in CppAttributeSetBase.h"
#endif
#define ABILITYSYSTEM2_CppAttributeSetBase_generated_h

#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_17_DELEGATE \
struct _Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms \
{ \
	float Health; \
	float MaxHealth; \
}; \
static inline void FOnHealthChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeDelegate, float Health, float MaxHealth) \
{ \
	_Script_AbilitySystem2_eventOnHealthChangeDelegate_Parms Parms; \
	Parms.Health=Health; \
	Parms.MaxHealth=MaxHealth; \
	OnHealthChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_SPARSE_DATA
#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_RPC_WRAPPERS
#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppAttributeSetBase(); \
	friend struct Z_Construct_UClass_UCppAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UCppAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(UCppAttributeSetBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCppAttributeSetBase(); \
	friend struct Z_Construct_UClass_UCppAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UCppAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(UCppAttributeSetBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppAttributeSetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppAttributeSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppAttributeSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppAttributeSetBase(UCppAttributeSetBase&&); \
	NO_API UCppAttributeSetBase(const UCppAttributeSetBase&); \
public:


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppAttributeSetBase(UCppAttributeSetBase&&); \
	NO_API UCppAttributeSetBase(const UCppAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCppAttributeSetBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_PRIVATE_PROPERTY_OFFSET
#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_19_PROLOG
#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_RPC_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_INCLASS \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_INCLASS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM2_API UClass* StaticClass<class UCppAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySys_Source_AbilitySystem2_Public_CppAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
