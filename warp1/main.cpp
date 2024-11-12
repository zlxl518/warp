#include "Board.h"
#include <random>
#include <windows.h>
#include <conio.h>


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