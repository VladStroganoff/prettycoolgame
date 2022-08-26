


#include "TileData.h"

UTileData::UTileData()
{
	TileType = ETileType::INVALID;
}

void UTileData::SetPosition(int32 x, int32 y, int32 z)
{
	X = x;
	Y = y;
	Z = z;
}


