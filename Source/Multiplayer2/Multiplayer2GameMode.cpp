// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer2GameMode.h"
#include "Multiplayer2Character.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer2GameMode::AMultiplayer2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
