#include "Board.h"
#include <random>
#include <windows.h>
#include <conio.h>
#include "common.h"
#include "Block.h"
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
	Board board1;
	Block block;
	board1.Board_Setup();
	while (1) {
		board1.Board_Print();
		char input = board1.Get_input();

		board1.Block_Set(block);
		Sleep(100);
		/*if (input == 72) { // ��
		}
		if (input == 75) { // ����
		}
		if (input == 77) { // ������
		}
		if (input == 80) { // �Ʒ�
		}
		//else   // �� �����ұ��
		*/
		board1.Block_Drop(block);



	}
	return 0;
}