// Fill out your copyright notice in the Description page of Project Settings.


#include "NetPlayerState2.h"

#include "NetGameInstance.h"

void ANetPlayerState2::BeginPlay()
{
	Super::BeginPlay();

	//내가 로컬플레이어라면
	auto pc = GetPlayerController();
	if(pc&&pc->IsLocalController())
	{
		auto gi = GetGameInstance<UNetGameInstance>();
		ServerSetNickname( gi->myNickName );
	}
	//UNetGameInstance의 nickname을 서버로 보내서
	//서버에서 nickName을 내 이름으로 하고 싶다.
	
}

void ANetPlayerState2::ServerSetNickname_Implementation(const FString& newNickname)
{
	//서버PRC함수에서
	SetPlayerName( newNickname );
}

//서버 PRC함수에서 //	SetPlayerName(newName)
