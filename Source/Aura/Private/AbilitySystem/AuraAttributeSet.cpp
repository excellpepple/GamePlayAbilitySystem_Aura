// Copyright Excell Pepple Production


#include "AbilitySystem/AuraAttributeSet.h"


#include "Net/UnrealNetwork.h"

UAuraAttributeSet::UAuraAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(200.f);
	InitMana(100.f);
	InitMaxMana(100.f);
}

void UAuraAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	
}

void UAuraAttributeSet::OnRep_Health(const FGameplayAttributeData& OldData) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldData);
}

void UAuraAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldData) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxHealth, OldData);
}

void UAuraAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldData) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Mana, OldData); 
}

void UAuraAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldData) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxMana, OldData);
}
