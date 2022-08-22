
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexTile.generated.h"


UENUM()
enum class HexType : uint8
{
	INVALID,
	Land,
	Water,
	Wall
};


UCLASS()
class PRETTYCOOLGAME_API AHexTile : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	FIntPoint TileIndex;
	

	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
	HexType TileType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
	UStaticMeshComponent* TileMesh;

	
public:	
	AHexTile();
};
