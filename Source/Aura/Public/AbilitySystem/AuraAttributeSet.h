// Copyright Excell Pepple Production

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AuraAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

// #define SUPPORT_REPLICATION_ON_ATTRIBUTE(ClassName, PropertyName) \
// 	void ##ClassName##::OnRep_##PropertyName(const FGameplayAttributeData& OldData) const \
// 	{ \
// 		GAMEPLAYATTRIBUTE_REPNOTIFY(##ClassName##, ##PropertyName##, OldData);\
// 	}

/**
 * 
 */
UCLASS()
class AURA_API UAuraAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UAuraAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Health attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category="Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Health)
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing= OnRep_MaxHealth, Category="Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxHealth)
	
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldData) const;
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldData) const;

	
	// Mana Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category="Vital Attributes")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category="Vital Attributes")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxMana);

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldData) const;
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldData) const;

	
	
};
