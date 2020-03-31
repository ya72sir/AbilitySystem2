// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "GameFramework/PlayerController.h"
#include "Abilities/GameplayAbility.h"

#include "CppGATargetActorGroundSelect.generated.h"


/**
 * 
 */
UCLASS()
class ABILITYSYSTEM2_API ACppGATargetActorGroundSelect : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()
	
public:
	virtual void StartTargeting(UGameplayAbility* Ability) override;
	virtual void ConfirmTargetingAndContinue() override;
};
