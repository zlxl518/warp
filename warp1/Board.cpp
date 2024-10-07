#include <iostream>
#include <windows.h>
#include "Board.h"

using namespace std;

void Board::Board_Setup(int(*board)[24]) {
	for (int y = 0; y < 24; y++)
	{
		for (int x = 0; x < 12; x++)
		{
			if ((x == 0) || (x == 11) || (y == 0) || (y == 23)) board[x][y] = 1;
		}
	}
}

void Board::Board_Print(int(*board)[24]) {
	//int inputx, inputy;
	//cin >> inputx >> inputy;
	//board[inputx][inputy] = 1;
	system("cls");

	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 12; x++) {
			if ((board[x][y] == 1)) cout << "бр";
			else if ((board[x][y] == 0)) cout << "  ";
			else cout << "error";
		}cout << endl;
	}
}
void Board::Block_Set(int(*board)[24]) {
	for (int x = 0; x < 4; ++x) {
		for (int y = 0; y < 4; ++y) {
			board[x+4][y+1] = Block_I[x][y];
		}
	}
}