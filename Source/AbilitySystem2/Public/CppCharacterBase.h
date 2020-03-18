// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "AbilitySystemInterface.h" 
#include "AbilitySystemComponent.h" 
#include "Abilities/GameplayAbility.h"

#include "CppCharacterBase.generated.h"


UCLASS(config = Game)
class ABILITYSYSTEM2_API ACppCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACppCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Our ability system */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities")
	class UAbilitySystemComponent* AbilitySystemComp;


	UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComp; };

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void AquireAbility(TSubclassOf<UGameplayAbility> AbilityToAquire);

};
