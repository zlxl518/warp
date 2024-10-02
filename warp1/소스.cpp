#include <iostream>
using namespace std;

class Board
{
public: // 외부에서도 사용 가능
	int board[12][24];
	void Board_Setup(int(*board)[24]);
	void Board_Print(int(*board)[24]);
};

int main() {
	Board Board1;
	int board[12][24] = { 0 };
	Board1.Board_Setup(board);
	while (1) {
		Board1.Board_Print(board);
	}
	return 0;
}

void Board::Board_Setup(int (*board)[24]) {
	for (int y = 0; y < 24; y++)
	{	
		for (int x = 0; x < 12; x++)
		{
			if ((x == 0) || (x == 11) || (y == 0) || (y == 23)) board[x][y] = 1;
		}
	}
}

void Board::Board_Print(int (*board)[24]) {
	int inputx, inputy;
	cin >> inputx >> inputy;
	board[inputx][inputy] = 1;
	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 12; x++) {
			if ((board[x][y] == 1)) cout << "□";
			else if ((board[x][y] == 0)) cout << "  ";
			else cout << "error";
		}cout << endl;
	}
}