// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "GameFramework/PlayerController.h"
#include "Abilities/GameplayAbility.h"
#include "GameFramework/Pawn.h"

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
	virtual void Tick(float DeltaSeconds) override;


	UFUNCTION(BlueprintCallable, Category = "GroundSelect")
	bool GetPlayerLocatioinPoint(FVector& OutViewPoint);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GroundSelect")
	float Radius;
};
