#include<stdio.h>
//While : Ư�� ���ǿ� ���� ������ �ݺ��ϴ� �ݺ� ����
// ���� : while (����) {������ ���϶� �ݺ��� ���� }

//do while : ������ �ϴ� �ѹ� �����ϰ� Ư�� ���ǿ� ���� ������ �ݺ�����
//���� : do { ������ ���϶� �ݺ��� ���� ) while (����)
//continue �ش� ������ ���������� ��ӹݺ� (�ؿ� ���ǹ��� �����ϰ�)

int main(void) {

	// ������ �׻� ���� �ݺ����� ���� ������� ��.
	while (0)
	{
		printf("hahahaha11111");
		continue; // �б⹮, ���� ����� �ݺ����� ã�Ƽ� �ش� �ݺ����� ���� ���ٷ� ���ư�
		printf("hahahaha22222");

	}
	printf("while is statement is over\n");


	int count = 0;
	while (count <= 5)
	{
		printf("while count : %d\n", count);
		count++;

	}
	printf("while statement is over\n");


	
	do
	{
		printf("do while test");
	} while (0);











	return 0;
}