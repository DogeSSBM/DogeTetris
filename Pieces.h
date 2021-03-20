#pragma once

typedef enum{R_CENTRAL, R_LEFT}RotationType;

bool getPieceBlock(const u16 piece, const uint x, const uint y)
{
	return piece & (0x8000>>(y*4+x));
}

u16 pieceRand(void)
{
	return blockBits[rand()%BLOCK_NUM][0];
}
