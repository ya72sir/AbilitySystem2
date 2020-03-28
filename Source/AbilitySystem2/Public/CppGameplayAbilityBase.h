// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"

#include "AbilityTypes.h"

#include "CppGameplayAbilityBase.generated.h"

/**
 * 
 */

UCLASS()

class ABILITYSYSTEM2_API UCppGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityBase")
	UMaterialInstance* UIMaterial;

	UFUNCTION(BlueprintCallable, Category = "AbilityBase")
	FGameplayAbilityInfo GetAbilityInfo();
	
};
