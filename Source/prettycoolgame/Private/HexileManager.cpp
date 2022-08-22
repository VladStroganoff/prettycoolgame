

#include "HexileManager.h"

AHexileManager::AHexileManager()
{

}

void AHexileManager::BeginPlay()
{
	Super::BeginPlay();
	
	Grid.SetNumZeroed(GridWidth);
	for(int32 i = 0; i < Grid.Num(); ++i)
	{
		Grid[i].SetNumZeroed(GridHeigh);
	}

	for(int32 y = 0; y < GridHeigh; ++y)
	{
		for(int32 x = 0; x<GridWidth; ++x)
		{
			const bool oddRow = y % 2 == 1;
			const float xPos =  oddRow ? (x * TileHorizontalOffset) + OddRowHirizontalOffset : x * TileHorizontalOffset;
			const float yPos = y * TileVerticalOffset;

			TSubclassOf<AHexTile> tile2Spawn = GrassHexTile;
			AHexTile* newTile = GetWorld()->SpawnActor<AHexTile>(tile2Spawn, FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);
			newTile->TileIndex = FIntPoint(x, y);
			Grid[x][y] = newTile;
		}
	}
		
}


