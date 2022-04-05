#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	//표준입출력함수
	//printf, scanf, putc, getc, puts, gets


	//fopen()
	//기본적으로 현재 프로그램 파일이 있는 폴더에서 파일을 검색한다.
	//
	//파일 개방 모드
	//r : 읽기 전용
	//w : 쓰기 전용
	//a : 덧붙여쓰기 전용


	FILE* tp1 = fopen("a.txt", "r");
	printf("%c\n", fgetc(tp1));







}