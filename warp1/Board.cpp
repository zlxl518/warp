#include <iostream>
#include "Board.h"
#include <random>
#include <conio.h>

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
			if ((board[x][y] == 1)) cout << "□";
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
void Block_Spwan(int(*board)[24]) {
	random_device random;
	std::mt19937 gen(random());
	uniform_int_distribution<int> dis(1, 7); // 얘 위치 여기 맞나요

	Board board2;
	int num = dis(gen);
	if (num == 1) {
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				board[i + 4][j] = board2.Block_I[i][j];
			}
		}
	}
}
void Board_Drop(int(*board)[24]) {
	for (int i = 1; i < 11; ++i) {
		for (int j = 1; i < 24; ++j) {
			board[i][j]
		}
	}

}
char Get_input() {
	if (_kbhit()) {
		return _getch();
	}
	return '\0';
}