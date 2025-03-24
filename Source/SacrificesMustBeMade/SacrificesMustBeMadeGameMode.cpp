// Copyright Epic Games, Inc. All Rights Reserved.

#include "SacrificesMustBeMadeGameMode.h"
#include "SacrificesMustBeMadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASacrificesMustBeMadeGameMode::ASacrificesMustBeMadeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
