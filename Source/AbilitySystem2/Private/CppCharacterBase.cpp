// Fill out your copyright notice in the Description page of Project Settings.

#include "CppCharacterBase.h"
#include "../Public/CppCharacterBase.h"

// Sets default values
ACppCharacterBase::ACppCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("Abilities");

	AttributeBase = CreateDefaultSubobject<UCppAttributeSetBase>("AttributeBase");
}

// Called when the game starts or when spawned
void ACppCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	AttributeBase->OnHealthChange.AddDynamic(this, &ACppCharacterBase::OnHealthChanged);
	
}

// Called every frame
void ACppCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ACppCharacterBase::AquireAbility(TSubclassOf<UGameplayAbility> AbilityToAquire)
{
	if (AbilitySystemComp)
	{
		if (HasAuthority() && AbilityToAquire)
		{
			FGameplayAbilitySpecDef SpecDef = FGameplayAbilitySpecDef();
			SpecDef.Ability = AbilityToAquire;
			FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(SpecDef, 1);
			AbilitySystemComp->GiveAbility(AbilitySpec);

			//AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(AbilityToAquire, 1, 0));

		}

		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

void ACppCharacterBase::OnHealthChanged(float Health, float MaxHealth)
{
	if (bIsDead) return;

	if (Health <= 0.0f)
	{
		BP_Die();
		bIsDead = true;
	}

	float percentage = Health / MaxHealth;

	BP_OnHelathChanged(Health, MaxHealth, percentage);

}
