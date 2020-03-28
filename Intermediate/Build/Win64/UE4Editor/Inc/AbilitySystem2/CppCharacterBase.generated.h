// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class ACppCharacterBase;
class UGameplayAbility;
#ifdef ABILITYSYSTEM2_CppCharacterBase_generated_h
#error "CppCharacterBase.generated.h already included, missing '#pragma once' in CppCharacterBase.h"
#endif
#define ABILITYSYSTEM2_CppCharacterBase_generated_h

#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_SPARSE_DATA
#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEvCpp_HitStun) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StunDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EvCpp_HitStun(Z_Param_StunDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGameplayTag(Z_Param_Out_TagToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGameplayTag(Z_Param_Out_TagToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCppIsOtherHosttile) \
	{ \
		P_GET_OBJECT(ACppCharacterBase,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FCppIsOtherHosttile(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStrengthChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStrengthChanged(Z_Param_Strength,Z_Param_MaxStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnManaChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mana); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxMana); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnManaChanged(Z_Param_Mana,Z_Param_MaxMana); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execAquireAbilitys) \
	{ \
		P_GET_TARRAY(TSubclassOf<UGameplayAbility> ,Z_Param_AbilityToAquires); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AquireAbilitys(Z_Param_AbilityToAquires); \
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


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEvCpp_HitStun) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StunDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EvCpp_HitStun(Z_Param_StunDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGameplayTag(Z_Param_Out_TagToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGameplayTag(Z_Param_Out_TagToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCppIsOtherHosttile) \
	{ \
		P_GET_OBJECT(ACppCharacterBase,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FCppIsOtherHosttile(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStrengthChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStrengthChanged(Z_Param_Strength,Z_Param_MaxStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnManaChanged) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mana); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxMana); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnManaChanged(Z_Param_Mana,Z_Param_MaxMana); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execAquireAbilitys) \
	{ \
		P_GET_TARRAY(TSubclassOf<UGameplayAbility> ,Z_Param_AbilityToAquires); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AquireAbilitys(Z_Param_AbilityToAquires); \
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


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_EVENT_PARMS \
	struct CppCharacterBase_eventBP_OnHelathChanged_Parms \
	{ \
		float Health; \
		float MaxHealth; \
		float percentage; \
	}; \
	struct CppCharacterBase_eventBP_OnManaChanged_Parms \
	{ \
		float Mana; \
		float MaxMana; \
		float percentage; \
	}; \
	struct CppCharacterBase_eventBP_OnStrengthChanged_Parms \
	{ \
		float Strength; \
		float MaxStrength; \
		float percentage; \
	};


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_CALLBACK_WRAPPERS
#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACppCharacterBase(); \
	friend struct Z_Construct_UClass_ACppCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACppCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACppCharacterBase*>(this); }


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACppCharacterBase(); \
	friend struct Z_Construct_UClass_ACppCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACppCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem2"), NO_API) \
	DECLARE_SERIALIZER(ACppCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACppCharacterBase*>(this); }


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_STANDARD_CONSTRUCTORS \
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


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppCharacterBase(ACppCharacterBase&&); \
	NO_API ACppCharacterBase(const ACppCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACppCharacterBase)


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_PRIVATE_PROPERTY_OFFSET
#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_18_PROLOG \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_EVENT_PARMS


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_RPC_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_CALLBACK_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_INCLASS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_PRIVATE_PROPERTY_OFFSET \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_SPARSE_DATA \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_CALLBACK_WRAPPERS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_INCLASS_NO_PURE_DECLS \
	AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM2_API UClass* StaticClass<class ACppCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySys_Source_AbilitySystem2_Public_CppCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
