// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
#ifdef ABILITYSYSTEM2_CppCharacterBase_generated_h
#error "CppCharacterBase.generated.h already included, missing '#pragma once' in CppCharacterBase.h"
#endif
#define ABILITYSYSTEM2_CppCharacterBase_generated_h

#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_Health,Z_Param_MaxHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAquireAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityToAquire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AquireAbility(Z_Param_AbilityToAquire); \
		P_NATIVE_END; \
	}


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_Health,Z_Param_MaxHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAquireAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityToAquire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AquireAbility(Z_Param_AbilityToAquire); \
		P_NATIVE_END; \
	}


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_EVENT_PARMS \
	struct CppCharacterBase_eventBP_OnHelathChanged_Parms \
	{ \
		float Health; \
		float MaxHealth; \
		float percentage; \
	};


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_CALLBACK_WRAPPERS
#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACppCharacterBase(); \
	friend struct Z_Construct_UClass_ACppCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACppCharacterBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACppCharacterBase*>(this); }


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACppCharacterBase(); \
	friend struct Z_Construct_UClass_ACppCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACppCharacterBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACppCharacterBase*>(this); }


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACppCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACppCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppCharacterBase(ACppCharacterBase&&); \
	NO_API ACppCharacterBase(const ACppCharacterBase&); \
public:


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppCharacterBase(ACppCharacterBase&&); \
	NO_API ACppCharacterBase(const ACppCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACppCharacterBase)


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_PRIVATE_PROPERTY_OFFSET
#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_17_PROLOG \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_EVENT_PARMS


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_RPC_WRAPPERS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_CALLBACK_WRAPPERS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_INCLASS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_CALLBACK_WRAPPERS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_INCLASS_NO_PURE_DECLS \
	AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem2_Source_AbilitySystem2_Public_CppCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
