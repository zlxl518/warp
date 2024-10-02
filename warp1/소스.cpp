#include <iostream>
using namespace std;
void board_setup(int(*board)[24]);
void board_print(int(*board)[24]);

int main() {
	/*int board[12][24] = {0};
	
	for (int i = 0; i < 24; ++i) {
		for (int j = 0; j < 12; ++j) {
			if ((i == 0) || (i == 23)) {
				board[j][i] = 1;
			}
			else if ((j == 0) || (j == 11)) {
				board[j][i] = 1;
			}
			else board[j][i] = 0;
		}
	}//여기까지가 board 테두리 초기화

	int inputx, inputy;
	while (1) {
		cin >> inputx >> inputy;
		board[inputx][inputy] = 1;
		for (int y = 0; y < 24; ++y) {
			for (int x = 0; x < 12; ++x) {
				if (board[x][y] == 1)
				{
					cout << "□";
				}
				else cout << "  ";
			}
			cout << endl;
		}
	}//좌표 입력 및 전체 출력
	*/

	//함수 호출 구상
	int board[12][24] = { 0 };
	board_setup(board);
	while (1) {
		board_print(board);
	}
	return 0;
}

void board_setup(int (*board)[24]) {
	//board[12][24] = { 0 };
	for (int y = 0; y < 24; y++)
	{	
		for (int x = 0; x < 12; x++)
		{
			if ((x == 0) || (x == 11) || (y == 0) || (y == 23)) board[x][y] = 1;
		}
	}
}

void board_print(int (*board)[24]) {
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