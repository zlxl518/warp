#include <iostream>
#include "Board.h"
#include <random>
#include <conio.h>
#include "common.h"
#include "Block.h"

using namespace std;

void Board::Board_Setup() {
	for (int y = 0; y < 24; y++)
	{
		for (int x = 0; x < 12; x++)
		{
			if ((x == 0) || (x == 11) || (y == 0) || (y == 23)) board[x][y] = 1;
			else board[x][y] = 0;
		}
	}
}

void Board::Board_Print() {
	system("cls");

	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 12; x++) {
			if ((board[x][y] == 1)) cout << "□";
			else if ((board[x][y] == 0)) cout << "  ";
			else cout << "error";
		}cout << endl;
	}
}
void Board::Block_Set(Block block) { //테스트용으로 I 블록 넣어보기
	for (int x = 0; x < 4; ++x) {
		for (int y = 0; y < 4; ++y) {
			if (block.Block_I[x][y] == 1) {
				board[x + 4][y + 1] = 1;
			}
		}
	}
}


void Board::Block_Drop(Block block) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) { 
			if (block.Block_I[i][j] == 1) {  
				int before_x = i;
				int before_y = j;
				if (board[before_x][before_y + 1] != 1) { 
				
					block.Block_I[before_x][before_y + 1] = block.Block_I[before_x][before_y];
					block.Block_I[before_x][before_y] = 0;
				}
				else {
					board[before_x][before_y] = block.Block_I[before_x][before_y];
					block.Block_I[before_x][before_y] = 0;
				}
			}
		}
	}
}

char Board::Get_input() {
	int ch = '\0';
	if (_kbhit()) {
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
		}
	}
	else {
		return ch;
	}
	return '\0';
}