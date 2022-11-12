// Fill out your copyright notice in the Description page of Project Settings.

#include "Blueprint/BlueprintUtils.h"

DEFINE_LOG_CATEGORY(LogBlueprintUtils)

void UBlueprintUtils::CartesianToIndex(const int Width, const int X, const int Y, int& Index)
{
	Index = X+(Width * Y);
}

void UBlueprintUtils::IndexToCartesian(const int Width, const int Index, int& X, int& Y)
{
	X = Index%Width;
	Y = Index/Width;
}
