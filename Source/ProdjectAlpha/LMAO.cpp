// Fill out your copyright notice in the Description page of Project Settings.


#include "LMAO.h"

// Sets default values
ALMAO::ALMAO()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Test = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LILBITCH"));

}

// Called when the game starts or when spawned
void ALMAO::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALMAO::Tick(float DeltaTime)
{
	
	
	Super::Tick(DeltaTime);

}

