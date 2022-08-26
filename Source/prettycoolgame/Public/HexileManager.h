
#pragma once

#include "CoreMinimal.h"
#include "HexTile.h"
#include "GameFramework/Actor.h"
#include "HexileManager.generated.h"

class AHexTile;

UCLASS()
class PRETTYCOOLGAME_API AHexileManager : public AActor
{
	GENERATED_BODY()

protected:

	TArray<TArray<AHexTile*>> Grid; 
	
	UPROPERTY(EditAnywhere, Category = "HexGrid")
	int32 GridWidth;
	UPROPERTY(EditAnywhere, Category = "HexGrid")
	int32 GridHeigh;

	UPROPERTY(EditAnywhere, Category = "HexGrid")
	float TileHorizontalOffset;

	UPROPERTY(EditAnywhere, Category = "HexGrid")
	float TileVerticalOffset;

	UPROPERTY(EditAnywhere, Category = "HexGrid")
	float OddRowHirizontalOffset;

	UPROPERTY(EditAnywhere, Category = "HexSetup")
	TSubclassOf<AHexTile> GrassHexTile;
	
public:	
	AHexileManager();
	void SpawnHexGrid();
	void SpawnTileGerid();

protected:
	virtual void BeginPlay() override;

};
