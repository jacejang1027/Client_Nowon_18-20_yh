#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	//ǥ��������Լ�
	//printf, scanf, putc, getc, puts, gets


	//fopen()
	//�⺻������ ���� ���α׷� ������ �ִ� �������� ������ �˻��Ѵ�.
	//
	//���� ���� ���
	//r : �б� ����
	//w : ���� ����
	//a : ���ٿ����� ����


	FILE* tp1 = fopen("a.txt", "r");
	printf("%c\n", fgetc(tp1));







}