#include<stdio.h>
int main()
{
	// ���Կ�����
	// ������ ���� ������ ���� ���� �޸𸮿� �Ҵ���
	//---------------------------------------------------
	int intResult = 0;
	double doubleResult = 0.0;

	//��� ������
	//---------------------------------------------------
	// +������
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// -������
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// *������
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// /������
	//������ ������ ������ ���� �� ��ȯ�Ѵ�.
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//% ������
	intResult = 3 % 4;
	doubleResult = 3 % 4;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//��ȣ ������
	intResult = +3;
	intResult = -3;

	//���� ���Կ�����
	//--------------------------------------------
	intResult += 0; // ����ǥ�� : intResult = intResult +3;

    //���� ������
	//--------------------------------------------

	//���� ������
	printf("Start testing increament operator !\n");
	intResult = 0;
	printf("intResult : %d\n", intResult++);
	printf("intResult : %d\n", intResult);//���� ���� ������, �ش� �����ڰ� ���Ե� ���� ������ �Ŀ� �����Ѵ�.
	printf("intResult : %d\n", intResult);
	intResult++;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", ++intResult);
	printf("intResult : %d\n", intResult);
	//���迬����
	//------------------------------------------------------------
	//���̸�1 �����̸� 0
	//<,>,==,>=,<=
	printf("is %d smaller than %d ? %d\n", 3, 4, 3 < 4);
	//�� ������
	// ���� ���� : 0�̾ƴ�
	// ������ ���� : 0
	//--------------------------------------------------
	int grade = 80;
	//&&(and ������)
	//�ǿ����� �ΰ��߿� �ϳ��� ���̸�
	printf("is %d 30<Grade and 80 > Grade ? %d \n", grade, (30 < grade) && (80 > grade));
	//||(or ������)
	//�ǿ����� �ΰ��߿� �ϳ��� ���̸� 1 ��������� ���� 0
	printf("is %d 30<Grade or 80 > Grade ? %d \n", grade, (30 < grade) || (80 > grade));
	//! (not ������)
	//���Ͽ�����. ( �ǿ����ڰ� �ϳ��� ��� )
	//�ǿ����� ����� ������Ų��. ��, 0�� �ƴϸ�0, 0�̸� 1
	printf("is not 30<%d ?%d\n ", grade, !(30 < grade));
	//��Ʈ ������
	//-----------------------------------------------------------
	





	return 0;
}