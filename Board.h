#pragma once

typedef enum{
	BT_0 = 0,	// 0...6 represent indicies in blockBits[] or blockColor[]
	BT_1 = 1,
	BT_2 = 2,
	BT_3 = 3,
	BT_4 = 4,
	BT_5 = 5,
	BT_6 = 6,
	BT_E = 7,	// empty
	BT_B = 8,	// border
}BlockType;

typedef struct{
	Length len;
	uint scale;
	uint score;
	uint level;
	BlockType board[10][40];
}Board;

void clearBoard(Board *const b)
{
	for(uint x = 0; x < b->len.x; x++){
		memset(b->board[x], BT_E, b->len.y*sizeof(BlockType));
	}
}

void randomize(Board *const b)
{
	for(uint y = 0; y < b->len.y; y++){
		for(uint x = 0; x < b->len.x; x++){
			b->board[x][y] = rand()%BLOCK_NUM;
		}
	}
}
