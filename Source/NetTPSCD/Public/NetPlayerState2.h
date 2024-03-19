// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NetPlayerState2.generated.h"

/**
 * 
 */
UCLASS()
class NETTPSCD_API ANetPlayerState2 : public APlayerState
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(Server , Reliable)
	void ServerSetNickname( const FString& newNickname );
};
