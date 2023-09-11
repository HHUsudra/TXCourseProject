// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXCourseProjectGameMode.h"
#include "TXCourseProjectHUD.h"
#include "TXCourseProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATXCourseProjectGameMode::ATXCourseProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATXCourseProjectHUD::StaticClass();
}
