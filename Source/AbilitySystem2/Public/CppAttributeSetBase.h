// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "CppCharacterBase.h"

#include "CppAttributeSetBase.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangeDelegate, float, Health, float, MaxHealth);

UCLASS()
class ABILITYSYSTEM2_API UCppAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:
	UCppAttributeSetBase();

	/* Start Health */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
	FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
	FGameplayAttributeData MaxHealth;
	/* End Health */

	/* Start Mana */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData MaxMana;
	/* End Mana */

	/* Start Strength */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData MaxStrength;
	/* End Strength */

	virtual  void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	
	FOnHealthChangeDelegate OnHealthChange;
	FOnHealthChangeDelegate OnManaChange;
	FOnHealthChangeDelegate OnStrengthChange;


};
