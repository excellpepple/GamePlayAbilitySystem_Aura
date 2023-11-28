// Copyright Excell Pepple Production

#pragma once

#include "CoreMinimal.h"
#include "Aura_Character_Base.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAura_Character_Base
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbiltiyActorInfo();
};
