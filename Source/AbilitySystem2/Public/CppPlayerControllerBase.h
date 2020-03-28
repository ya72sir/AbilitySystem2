// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilityTypes.h"

#include "CppPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM2_API ACppPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerControllerBase")
	void AddAbilityToUI(FGameplayAbilityInfo AbilityInfo);
	
};
