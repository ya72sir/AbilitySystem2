// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AbilitySystem2HUD.generated.h"

UCLASS()
class AAbilitySystem2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AAbilitySystem2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

