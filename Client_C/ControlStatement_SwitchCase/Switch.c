#include <stdio.h>

// switch - case ���ǹ� : ��쿡 ���� �帧�� ������
//���� : switch ( ���� �Ű�����)
// case ����1 : ���ǸŰ����� = ����1�϶� �����Ұ��
// case ����2 : ���ǸŰ����� = ����2�϶� �����Ұ��
// case ����3 : ���ǸŰ����� = ����3�϶� �����Ұ��
// default : �� ��


int main(void)
   
{
	// n ���� 10���� ���ϴ� ����
	int n = 2;
	int sum = 0;
	switch (n) //n = case ��ȣ
	{
	case 1:
		sum += 20;
	case 2:
		sum += 20;
	case 3:
		sum += 20;
	case 4:
		sum += 20;
	case 5:
		sum += 20;

	default:
		break;
		
	}
	printf("%d\n", sum);
	// ���ĺ� �θ���
	char character;
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf_s("%c", &character, 3);
	

	switch (character)
	{
		
	case 'A':
		printf("%c says : I'm here! \n", character);
		break; //break �б⹮ : ���� ����� �ݺ����� ������
	case 'B':
		printf("%c says : I'm here! \n", character);
		break;
	case 'C':
		printf("%c says : I'm here! \n", character);
		break;
	case 'D':
		printf("%c says : I'm here! \n", character);
		break;
	default:
		printf("Who r u %c ? \n", character);
		break;
	}



	return 0;

}