// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYSYSTEM2_AbilityTypes_generated_h
#error "AbilityTypes.generated.h already included, missing '#pragma once' in AbilityTypes.h"
#endif
#define ABILITYSYSTEM2_AbilityTypes_generated_h

#define AbilitySys_Source_AbilitySystem2_Public_AbilityTypes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics; \
	ABILITYSYSTEM2_API static class UScriptStruct* StaticStruct();


template<> ABILITYSYSTEM2_API UScriptStruct* StaticStruct<struct FGameplayAbilityInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySys_Source_AbilitySystem2_Public_AbilityTypes_h


#define FOREACH_ENUM_EABILITYCOSTTYPE(op) \
	op(EAbilityCostType::Health) \
	op(EAbilityCostType::Mana) \
	op(EAbilityCostType::Strength) 

enum class EAbilityCostType : uint8;
template<> ABILITYSYSTEM2_API UEnum* StaticEnum<EAbilityCostType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
