// Copyright Excell Pepple Production


#include "Player/AuraPlayerState.h"


// Sets default values
AAuraPlayerState::AAuraPlayerState()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NetUpdateFrequency = 100.f;
}

// Called when the game starts or when spawned
void AAuraPlayerState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraPlayerState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

