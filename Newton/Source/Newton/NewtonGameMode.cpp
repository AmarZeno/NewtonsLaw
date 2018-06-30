// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NewtonGameMode.h"
#include "NewtonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewtonGameMode::ANewtonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
