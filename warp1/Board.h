class Block;
class Board
{
public:
	void Board_Setup();
	void Board_Print();
	void Block_Set(Block block);
	void Block_Drop(Block block);
	char Get_input();
	int board[12][24] = { 0 };
};

