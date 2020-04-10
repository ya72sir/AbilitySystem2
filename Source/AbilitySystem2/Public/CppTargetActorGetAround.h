// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "CppTargetActorGetAround.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM2_API ACppTargetActorGetAround : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()

public:
	void StartTargeting(UGameplayAbility* Ability) override;

	void ConfirmTargetingAndContinue() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FindRound", meta = (ExposeOnSpawn = True))
	float Radius;


	
};
