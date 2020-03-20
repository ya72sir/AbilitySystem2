// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "AbilitySystemInterface.h" 
#include "AbilitySystemComponent.h" 
#include "Abilities/GameplayAbility.h"

#include "CppAttributeSetBase.h"


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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities")
	class UCppAttributeSetBase*  AttributeBase;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComp; };

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void AquireAbility(TSubclassOf<UGameplayAbility> AbilityToAquire);

	UFUNCTION()
	void OnHealthChanged(float Health, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities", meta = (DisplayName = "EvCppOnHealthChanged"))
	void BP_OnHelathChanged(float Health, float MaxHealth, float percentage);

	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities", meta = (DisplayName = "EvCppDie"))
	void BP_Die();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	bool FCppIsOtherHosttile(ACppCharacterBase* Other);

	uint8 GetTeamID() const;

protected:
	bool bIsDead = false;
	uint8 TeamID;
	void AutoDeterminTeamIDbyControllerType();
	void Dead();

};
