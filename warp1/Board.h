class Board
{
public:
	void Board_Setup(int(*board)[24]);
	void Board_Print(int(*board)[24]);
	void Block_Set(int(*board)[24]);
	void Block_Spwan(int(*board)[24]); //�� �ʿ� ���µ�
	void Board_Drop(int(*board)[24]);
	char Get_input();
	int Block_I[4][4] =
	{
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{1, 0, 0, 0}
	};
	int Block_J[4][4] =
	{
		{0, 1, 0, 0},
		{0, 1, 0, 0},
		{1, 1, 0, 0},
		{0, 0, 0, 0}
	};
	int Block_L[4][4] =
	{
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{1, 1, 0, 0},
		{0, 0, 0, 0}
	};
	int Block_O[4][4] =
	{
		{1, 1, 0, 0},
		{1, 1, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
};

