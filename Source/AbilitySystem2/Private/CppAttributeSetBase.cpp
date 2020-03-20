// Fill out your copyright notice in the Description page of Project Settings.

#include "CppAttributeSetBase.h"

UCppAttributeSetBase::UCppAttributeSetBase() 
	:Health(200.0f)
{

}

void UCppAttributeSetBase::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(UCppAttributeSetBase::StaticClass(), GET_MEMBER_NAME_CHECKED(UCppAttributeSetBase, Health)))
	{
		UE_LOG(LogTemp, Warning, TEXT("Damage, %f"), Health.GetCurrentValue());
	
	}
}
