// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ABILITYSYSTEM2_CppGATargetActorGroundSelect_generated_h
#error "CppGATargetActorGroundSelect.generated.h already included, missing '#pragma once' in CppGATargetActorGroundSelect.h"
#endif
#define ABILITYSYSTEM2_CppGATargetActorGroundSelect_generated_h

#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_SPARSE_DATA
#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerLocatioinPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutViewPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerLocatioinPoint(Z_Param_Out_OutViewPoint); \
		P_NATIVE_END; \
	}


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerLocatioinPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutViewPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerLocatioinPoint(Z_Param_Out_OutViewPoint); \
		P_NATIVE_END; \
	}


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACppGATargetActorGroundSelect(); \
	friend struct Z_Construct_UClass_ACppGATargetActorGroundSelect_Statics; \
public: \
	DECLARE_CLASS(ACppGATargetActorGroundSelect, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppGATargetActorGroundSelect)


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_INCLASS \
private: \
	static void StaticRegisterNativesACppGATargetActorGroundSelect(); \
	friend struct Z_Construct_UClass_ACppGATargetActorGroundSelect_Statics; \
public: \
	DECLARE_CLASS(ACppGATargetActorGroundSelect, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppGATargetActorGroundSelect)


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACppGATargetActorGroundSelect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACppGATargetActorGroundSelect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppGATargetActorGroundSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppGATargetActorGroundSelect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppGATargetActorGroundSelect(ACppGATargetActorGroundSelect&&); \
	NO_API ACppGATargetActorGroundSelect(const ACppGATargetActorGroundSelect&); \
public:


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppGATargetActorGroundSelect(ACppGATargetActorGroundSelect&&); \
	NO_API ACppGATargetActorGroundSelect(const ACppGATargetActorGroundSelect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppGATargetActorGroundSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppGATargetActorGroundSelect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACppGATargetActorGroundSelect)


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_PRIVATE_PROPERTY_OFFSET
#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_21_PROLOG
#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_RPC_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_INCLASS \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_INCLASS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM2_API UClass* StaticClass<class ACppGATargetActorGroundSelect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySys_Source_AbilitySystem2_Public_CppGATargetActorGroundSelect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
