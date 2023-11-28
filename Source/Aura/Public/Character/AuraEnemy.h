// Copyright Excell Pepple Production

#pragma once

#include "CoreMinimal.h"
#include "Aura_Character_Base.h"
#include "Interaction/EnemyInterface.h"
#include "DrawDebugHelpers.h"
#include "AuraEnemy.generated.h"


/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAura_Character_Base, public IEnemyInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

protected:
	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;
};
