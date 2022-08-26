// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintUtils.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintUtils, Log, All)

/**
 * 
 */
UCLASS()
class PRETTYCOOLGAME_API UBlueprintUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category="PrettyCoolGame", meta=(WorldContext=WorldContextObject))
	static void CartesianToIndex(const int Width, const int X, const int Y, int& Index);

	UFUNCTION(BlueprintPure, Category="PrettyCoolGame", meta=(WorldContext=WorldContextObject))
	static void IndexToCartesian(const int Width, const int Index, int& X, int& Y);
};

