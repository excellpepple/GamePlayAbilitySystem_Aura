// Copyright Excell Pepple Production

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Aura_Character_Base.generated.h"

UCLASS(Abstract)
class AURA_API AAura_Character_Base : public ACharacter
{
	GENERATED_BODY()

public:
	
	AAura_Character_Base();

protected:
	
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category=Combat)
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
