// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileData.generated.h"


UENUM()
enum class ETileType : uint8
{
	INVALID,
	Land,
	Water,
	Wall
};


UCLASS()
class PRETTYCOOLGAME_API UTileData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	ETileType TileType;
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	FIntPoint X;
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	FIntPoint Y;
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	FIntPoint Z;

	UTileData();

	void SetPosition(int32 x, int32 y, int32 z);
};
