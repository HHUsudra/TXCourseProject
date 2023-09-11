// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TXCourseProjectHUD.generated.h"

UCLASS()
class ATXCourseProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATXCourseProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

