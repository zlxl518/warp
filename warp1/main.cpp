#include "Board.h"
#include <random>
#include <windows.h>
#include <conio.h>
#include "common.h"
#include "Block.h"
using namespace std;

int main() {

	/*  구상
	* 블럭 = 이동시키는 블럭, 고정 블럭
	while(1){
	판 출력;
	키 입력; (윗방향키 - 회전,나머지 - 이동, 킵 -  C, 드랍 - 스페이스바)
	sleep(100); -- 슬립을 쓰면 키 입력을 한바퀴당 한번만 받을 수 있나? // 안됨. 도와주세요..
	if로 게임 오버 확인
	*/

	/*
	판 내리는 법
	이동하는 블럭을 Block.Move로.
	Block.Move[x][y]에서, board[x][y+1] 이면 Block.Move 를 board로.
	
	*/
	Board board1;
	Block block;
	board1.Board_Setup();
	while (1) {
		board1.Board_Print();
		char input = board1.Get_input();

		board1.Block_Set(block);
		Sleep(100);
		/*if (input == 72) { // 위
		}
		if (input == 75) { // 왼쪽
		}
		if (input == 77) { // 오른쪽
		}
		if (input == 80) { // 아래
		}
		//else   // 뭐 들어가야할까요
		*/
		board1.Block_Drop(block);



	}
	return 0;
}