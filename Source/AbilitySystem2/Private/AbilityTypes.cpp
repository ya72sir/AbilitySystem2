// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTypes.h"

FGameplayAbilityInfo::FGameplayAbilityInfo()
	:	CoolDownDuration(0), 
		Cost(0), 
		CostType(EAilityCostType::Mana), 
		UIMat(nullptr), 
		AbilityClass(nullptr)



{



}

FGameplayAbilityInfo::FGameplayAbilityInfo(float InCoolDownDuration, float InCost, EAilityCostType InCostType, UMaterialInterface* InUIMat, TSubclassOf<UCppGameplayAbilityBase> InAbilityClass)
	: CoolDownDuration(InCoolDownDuration),
	Cost(InCost),
	CostType(InCostType),
	UIMat(InUIMat),
	AbilityClass(InAbilityClass)
{



}
