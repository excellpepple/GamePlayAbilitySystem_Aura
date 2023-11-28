// Copyright Excell Pepple Production


#include "Aura_Character_Base.h"

// Sets default values
AAura_Character_Base::AAura_Character_Base()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAura_Character_Base::BeginPlay()
{
	Super::BeginPlay();
	
}



