// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "CppAttributeSetBase.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM2_API UCppAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:
	UCppAttributeSetBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
	FGameplayAttributeData Health;

	virtual  void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	
};
