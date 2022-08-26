
#pragma once

#include "CoreMinimal.h"
#include "TileData.h"
#include "GameFramework/Actor.h"
#include "HexTile.generated.h"



UCLASS()
class PRETTYCOOLGAME_API AHexTile : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleInstanceOnly, Category = "Tile")
	UTileData* TileData;
	

	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
	UStaticMeshComponent* TileMesh;

	
public:	
	AHexTile();
};
