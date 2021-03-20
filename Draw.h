#pragma once

const Color blockColor[] = {
	(Color){0xcd, 0x00, 0xcd, 0xff},
	(Color){0xff, 0xff, 0x00, 0xff},
	(Color){0x00, 0xff, 0xff, 0xff},
	(Color){0xff, 0x00, 0x00, 0xff},
	(Color){0x00, 0xff, 0x00, 0xff},
	(Color){0x00, 0x00, 0xac, 0xff},
	(Color){0xff, 0x78, 0x00, 0xff},
	BLACK,
	GREY
};

void drawPieceBlock(const Coord pos, const uint scale)
{
	fillSquareCoord(coordMul(coordShift(pos,DIR_R,1), scale), scale);
	setColor(BLACK);
	drawSquareCoord(coordMul(coordShift(pos,DIR_R,1), scale), scale);
}

void drawBoard(const Board *const b)
{
	for(uint y = 0; y < 20; y++){
		setColor(GREY);
		drawPieceBlock((Coord){-1,y}, b->scale);
		setColor(GREY);
		drawPieceBlock((Coord){10,y}, b->scale);
		for(uint x = 0; x < b->len.x; x++){
			setColor(blockColor[b->board[x][y]]);
			drawPieceBlock((Coord){x,y}, b->scale);
		}
	}
	for(int x = -1; x < b->len.x+1; x++){
		setColor(GREY);
		drawPieceBlock((Coord){x,20}, b->scale);
	}
}

void drawBlock(const Coord pos, const u16 block, const BlockType type, const uint scale)
{
	setColor(blockColor[type]);
	for(uint y = 0; y < 4; y++){
		for(uint x = 0; x < 4; x++){
			if(getPieceBlock(block, x, y)){
				setColor(blockColor[type]);
				drawPieceBlock(coordOffset((Coord){x,y},pos), scale);
			}
		}
	}
}
