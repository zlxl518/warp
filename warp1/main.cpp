#include "Board.h"

int main() {
	Board Board1;
	int board[12][24] = { 0 };
	Board1.Board_Setup(board);
	while (1) {
		Board1.Board_Print(board);
		//Board1.Drop_Blocks(board);
		Board1.Block_Set(board);
		//Block_Spwan(1~7);
		sleep(1000);
	}
	return 0;
}