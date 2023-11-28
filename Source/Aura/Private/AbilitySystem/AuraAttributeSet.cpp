// Copyright Excell Pepple Production


#include "AbilitySystem/AuraAttributeSet.h"

#include "AbilitySystemComponent.h"

UAuraAttributeSet::UAuraAttributeSet()
{
}

void UAuraAttributeSet::OnRep_Health(const FGameplayAttributeData& OldData)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldData);
}
