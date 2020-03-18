// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ABILITYSYSTEM2_AbilitySystem2Projectile_generated_h
#error "AbilitySystem2Projectile.generated.h already included, missing '#pragma once' in AbilitySystem2Projectile.h"
#endif
#define ABILITYSYSTEM2_AbilitySystem2Projectile_generated_h

#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilitySystem2Projectile(); \
	friend struct Z_Construct_UClass_AAbilitySystem2Projectile_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystem2Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystem2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAbilitySystem2Projectile(); \
	friend struct Z_Construct_UClass_AAbilitySystem2Projectile_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystem2Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystem2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilitySystem2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilitySystem2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystem2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystem2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystem2Projectile(AAbilitySystem2Projectile&&); \
	NO_API AAbilitySystem2Projectile(const AAbilitySystem2Projectile&); \
public:


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystem2Projectile(AAbilitySystem2Projectile&&); \
	NO_API AAbilitySystem2Projectile(const AAbilitySystem2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystem2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystem2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilitySystem2Projectile)


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAbilitySystem2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAbilitySystem2Projectile, ProjectileMovement); }


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_9_PROLOG
#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_RPC_WRAPPERS \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_INCLASS \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_INCLASS_NO_PURE_DECLS \
	AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem2_Source_AbilitySystem2_AbilitySystem2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
