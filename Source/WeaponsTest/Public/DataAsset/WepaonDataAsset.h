// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WepaonDataAsset.generated.h"

/**
 * 
 */

class FFloatCurve;
UCLASS()
class WEAPONSTEST_API UWepaonDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	UStaticMesh* Mesh;

	UPROPERTY(EditDefaultsOnly)
	FFloatCurve HorizontalRecoil;

	UPROPERTY(EditDefaultsOnly)
	FFloatCurve VerticalRecoil;
};
