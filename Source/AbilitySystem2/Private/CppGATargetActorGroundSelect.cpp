// Fill out your copyright notice in the Description page of Project Settings.


#include "CppGATargetActorGroundSelect.h"

void ACppGATargetActorGroundSelect::StartTargeting(UGameplayAbility* Ability)
{
	OwningAbility = Ability;

	MasterPC = Cast<APlayerController>(Ability->GetOwningActorFromActorInfo()->GetInstigatorController());

}

void ACppGATargetActorGroundSelect::ConfirmTargetingAndContinue()
{
	FVector ViewPoint;
	FRotator ViewRotation;

	MasterPC->GetPlayerViewPoint(ViewPoint, ViewRotation);

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;

	QueryParams.bTraceComplex = true;

	APawn* MasterPawn = MasterPC->GetPawn();

	if (MasterPawn)
	{
		QueryParams.AddIgnoredActor(MasterPawn->GetUniqueID());
	}

	FVector LookAtPoint = FVector();
	bool TryTrace = GetWorld()->LineTraceSingleByChannel(HitResult, ViewPoint, ViewPoint + ViewRotation.Vector() * 10000.0f, ECC_Visibility, QueryParams);

	if (TryTrace)
	{
		LookAtPoint = HitResult.ImpactPoint;
	}

}
