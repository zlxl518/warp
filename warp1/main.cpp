#include "Board.h"
#include <random>
#include <windows.h>
#include <conio.h>


using namespace std;

int main() {

	/*  ����
	* �� = �̵���Ű�� ��, ���� ��
	while(1){
	�� ���;
	Ű �Է�; (������Ű - ȸ��,������ - �̵�, ŵ -  C, ��� - �����̽���)
	sleep(100); -- ������ ���� Ű �Է��� �ѹ����� �ѹ��� ���� �� �ֳ�? // �ȵ�. �����ּ���..
	if�� ���� ���� Ȯ��
	*/

	/*
	�� ������ ��
	�̵��ϴ� ���� Block.Move��.
	Block.Move[x][y]����, board[x][y+1] �̸� Block.Move �� board��.
	
	*/
	Board Board1;
	int board[12][24] = { 0 };
	Board1.Board_Setup(board);
	while (1) {
		Board1.Board_Print(board);
		char input = Board1.Get_input();
		
		Board1.Block_Set(board);
		Sleep(1000);
		Board1.Board_Drop(board);
		
	
	
	}
	return 0;
}