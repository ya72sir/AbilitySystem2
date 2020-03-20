// Fill out your copyright notice in the Description page of Project Settings.

#include "CppAttributeSetBase.h"

UCppAttributeSetBase::UCppAttributeSetBase() 
	:Health(200.0f), 
	MaxHealth(200.0f)
{

}

void UCppAttributeSetBase::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(UCppAttributeSetBase::StaticClass(), GET_MEMBER_NAME_CHECKED(UCppAttributeSetBase, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.0f, MaxHealth.GetCurrentValue()));
		Health.SetBaseValue(FMath::Clamp(Health.GetBaseValue(), 0.0f, MaxHealth.GetCurrentValue()));

		UE_LOG(LogTemp, Warning, TEXT("Damage, %f"), Health.GetCurrentValue());

		OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
	
	}
}
