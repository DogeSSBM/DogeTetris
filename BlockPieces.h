#pragma once
#define BLOCK_PIECE_0_0	0b\
0000\
1111\
0000\
0000
#define BLOCK_PIECE_0_1	0b\
0010\
0010\
0010\
0010
#define BLOCK_PIECE_0_2	0b\
0000\
0000\
1111\
0000
#define BLOCK_PIECE_0_3	0b\
0100\
0100\
0100\
0100

#define BLOCK_PIECE_1_0	0b\
0000\
0110\
0110\
0000
#define BLOCK_PIECE_1_1	0b\
0000\
0110\
0110\
0000
#define BLOCK_PIECE_1_2	0b\
0000\
0110\
0110\
0000
#define BLOCK_PIECE_1_3	0b\
0000\
0110\
0110\
0000

#define BLOCK_PIECE_2_0	0b\
0100\
1110\
0000\
0000
#define BLOCK_PIECE_2_1	0b\
0100\
0110\
0100\
0000
#define BLOCK_PIECE_2_2	0b\
0000\
1110\
0100\
0000
#define BLOCK_PIECE_2_3	0b\
0100\
1100\
0100\
0000

#define BLOCK_PIECE_3_0	0b\
1100\
0110\
0000\
0000
#define BLOCK_PIECE_3_1	0b\
0010\
0110\
0100\
0000
#define BLOCK_PIECE_3_2	0b\
0000\
1100\
0110\
0000
#define BLOCK_PIECE_3_3	0b\
0100\
1100\
1000\
0000

#define BLOCK_PIECE_4_0	0b\
0110\
1100\
0000\
0000
#define BLOCK_PIECE_4_1	0b\
0100\
0110\
0010\
0000
#define BLOCK_PIECE_4_2	0b\
0000\
0110\
1100\
0000
#define BLOCK_PIECE_4_3	0b\
1000\
1100\
0100\
0000

#define BLOCK_PIECE_5_0	0b\
1110\
0010\
0000\
0000
#define BLOCK_PIECE_5_1	0b\
0010\
0010\
0110\
0000
#define BLOCK_PIECE_5_2	0b\
0000\
1000\
1110\
0000
#define BLOCK_PIECE_5_3	0b\
1100\
1000\
1000\
0000

#define BLOCK_PIECE_6_0	0b\
1110\
1000\
0000\
0000
#define BLOCK_PIECE_6_1	0b\
0110\
0010\
0010\
0000
#define BLOCK_PIECE_6_2	0b\
0000\
1000\
1110\
0000
#define BLOCK_PIECE_6_3	0b\
1100\
1000\
1000\
0000

const u16 blockBits[BLOCK_NUM][4] = {
	{BLOCK_PIECE_0_0, BLOCK_PIECE_0_1, BLOCK_PIECE_0_2, BLOCK_PIECE_0_3},
	{BLOCK_PIECE_1_0, BLOCK_PIECE_1_1, BLOCK_PIECE_1_2, BLOCK_PIECE_1_3},
	{BLOCK_PIECE_2_0, BLOCK_PIECE_2_1, BLOCK_PIECE_2_2, BLOCK_PIECE_2_3},
	{BLOCK_PIECE_3_0, BLOCK_PIECE_3_1, BLOCK_PIECE_3_2, BLOCK_PIECE_3_3},
	{BLOCK_PIECE_4_0, BLOCK_PIECE_4_1, BLOCK_PIECE_4_2, BLOCK_PIECE_4_3},
	{BLOCK_PIECE_5_0, BLOCK_PIECE_5_1, BLOCK_PIECE_5_2, BLOCK_PIECE_5_3},
	{BLOCK_PIECE_6_0, BLOCK_PIECE_6_1, BLOCK_PIECE_6_2, BLOCK_PIECE_6_3}
};
