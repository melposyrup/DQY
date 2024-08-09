// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Engine/GameViewportClient.h"
#include "DQYLocalMPViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class DQY_API UDQYLocalMPViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	virtual bool InputKey(const FInputKeyEventArgs& InEventArgs) override;
	virtual bool InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta, float DeltaTime, int32 NumSamples = 1, bool bGamepad = false) override;
};
