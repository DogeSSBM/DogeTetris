#include "Includes.h"
#define BLOCK_NUM		7
#include "BlockPieces.h"
#include "Pieces.h"
#include "Board.h"
#include "Draw.h"

const uint levelFalltime[] = {
	48*TPF,
	43*TPF,
	38*TPF,
	33*TPF,
	28*TPF,
	23*TPF,
	18*TPF,
	13*TPF,
	8*TPF,
	6*TPF,
	5*TPF,
	5*TPF,
	5*TPF,
	4*TPF,
	4*TPF,
	4*TPF,
	3*TPF,
	3*TPF,
	3*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	2*TPF,
	1*TPF
};

int main(int argc, char const *argv[])
{
	Board b = {
		.len = {10, 40},
		.scale = 45,
		.score = 0,
		.level = 0,
	};

	const Length window = coordMul((Coord){12,21}, b.scale);
	init(window);

	Ticks delay = 0;
	while(1){
		Ticks frameStart = getTicks();
		clear();

		if(getTicks()>delay){
			randomize(&b);
			delay=getTimeIn(2);
		}
		drawBoard(&b);

		draw();
		events(frameStart + TPF);
	}
	return 0;
}
