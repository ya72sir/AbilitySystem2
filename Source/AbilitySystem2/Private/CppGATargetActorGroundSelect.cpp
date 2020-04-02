// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"

#include "CppGATargetActorGroundSelect.h"

void ACppGATargetActorGroundSelect::StartTargeting(UGameplayAbility* Ability)
{
	OwningAbility = Ability;

	MasterPC = Cast<APlayerController>(Ability->GetOwningActorFromActorInfo()->GetInstigatorController());
}

void ACppGATargetActorGroundSelect::ConfirmTargetingAndContinue()
{

	FVector ViewLocation;
	GetPlayerLocatioinPoint(ViewLocation);

	TArray<FOverlapResult> Overlaps;
	TArray<TWeakObjectPtr<AActor>> OverlapedActors;
	bool TraceComplex = false;

	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.bTraceComplex = TraceComplex;
	CollisionQueryParams.bReturnPhysicalMaterial = false;
	APawn* MasterPawn = MasterPC->GetPawn();
	if (MasterPawn)
	{
		CollisionQueryParams.AddIgnoredActor(MasterPC->GetUniqueID());
	}

	bool TryOverlap = GetWorld()->OverlapMultiByObjectType
	(
		Overlaps, 
		ViewLocation, 
		FQuat::Identity, 
		FCollisionObjectQueryParams(ECC_Pawn), 
		FCollisionShape::MakeSphere(Radius), 
		CollisionQueryParams
	);

	if (TryOverlap)
	{
		for (int32 i = 0; i<Overlaps.Num(); i++) 
		{
			APawn* PawnOverlaped = Cast<APawn>(Overlaps[i].GetActor());
			
			if (PawnOverlaped && !OverlapedActors.Contains(PawnOverlaped)) 
			{
				OverlapedActors.Add(PawnOverlaped);
			}
		}
	}

	if (OverlapedActors.Num() > 0)
	{
		FGameplayAbilityTargetDataHandle TargetData = StartLocation.MakeTargetDataHandleFromActors(OverlapedActors);
		TargetDataReadyDelegate.Broadcast(TargetData);
	}
	else 
	{
		TargetDataReadyDelegate.Broadcast(FGameplayAbilityTargetDataHandle());
	}
}

void ACppGATargetActorGroundSelect::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	FVector LookPoint;
	GetPlayerLocatioinPoint(LookPoint);
	DrawDebugSphere(GetWorld(), LookPoint, Radius, 32, FColor::Red, true, -1, 0, 5.0f);

}

bool ACppGATargetActorGroundSelect::GetPlayerLocatioinPoint(FVector& OutViewPoint)
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


	bool TryTrace = GetWorld()->LineTraceSingleByChannel(HitResult, ViewPoint, ViewPoint + ViewRotation.Vector() * 10000.0f, ECC_Visibility, QueryParams);

	if (TryTrace)
	{
		OutViewPoint = HitResult.ImpactPoint;
	}
	else
	{
		OutViewPoint = FVector();
	}

	return TryTrace;
}
