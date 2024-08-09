// Fill out your copyright notice in the Description page of Project Settings.


#include "DQYLocalMPViewportClient.h"

bool UDQYLocalMPViewportClient::InputKey(const FInputKeyEventArgs& InEventArgs)
{
	if (InEventArgs.IsGamepad())
	{
		FInputKeyEventArgs Temp = InEventArgs;
		Temp.ControllerId++;
		return Super::InputKey(Temp);
	}
	else
	{
		return Super::InputKey(InEventArgs);
	}
}

bool UDQYLocalMPViewportClient::InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta,
	float DeltaTime, int32 NumSamples, bool bGamepad)
{
	if (bGamepad)
	{
		// Map the gamepad to the next player index (so 1st controller is player index 1, etc.)
		FInputDeviceId Temp = FInputDeviceId::CreateFromInternalId(InputDevice.GetId()+1);
		return Super::InputAxis(InViewport, Temp, Key, Delta, DeltaTime, NumSamples, bGamepad);
	}
	else
	{
		return Super::InputAxis(InViewport, InputDevice, Key, Delta, DeltaTime, NumSamples, bGamepad);
	}

}
