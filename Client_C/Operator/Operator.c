#include<stdio.h>
int main()
{
	// ���Կ�����
	// ������ ���� ������ ���� ���� �޸𸮿� �Ҵ���
	// A+=B:A��B�� ���ؼ� A�� �ִ´�.
	// A = A+B
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
	int Result = 0;
	//printf("Result = %d\n", Result);
	//Result ;
	//printf("Result = %d\n", Result);//���� ���� ������, �ش� �����ڰ� ���Ե� ���� ������ �Ŀ� �����Ѵ�.
	//Result++;
	//printf("Result = %d\n", Result);

	printf("Result : %d\n", Result);
	printf("Result : %d\n", --Result);
	printf("Result : %d\n", --Result);
	printf("Result : %d\n", --Result);
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
	//&������ �Ѵ� 11�̿��� 1
	printf("%d & %d = %d\n", 5, 10, 5 & 10);
	
	//5= 00000101
	//10=00001010 &
	//|( ��Ʈ or ������, �ǿ����� 2��.)
	//�ϳ��� 1�̸� 1
	printf("%d|%d=%d\n", 5, 10, 5 | 10);

	//^(��Ʈ xor ������, �ǿ����� 2��.)
	//���� �� ��Ʈ�� �ϳ��� ���϶� (1�϶�) �ش��Ʈ 1, �������� ��� 0
	printf("%d^%d=%d\n", 8, 42, 8 ^ 42);

	//<<(��Ʈ ����Ʈ ����Ʈ)
	//��� ��Ʈ�� �������� ��, �ʰ��ϴ� ��Ʈ�� �����
	printf("shift %d to the left by %d= %d.\n", 5, 3, 5 << 3);

	//>>(��Ʈ ����Ʈ ����Ʈ)
	//��� ��Ʈ�� ���������� ��, �ʰ��ϴ� ��Ʈ�� �����
	printf("shift %d to the right by %d= %d.\n", 5, 3, 5 >> 3);

	// (? :) ���׿�����
	// ? �� ���� ������ ���̸� : �� ���ʰ��, �����̸� : �� ������ ����� ��ȯ��
	//3 < 2 ? 1 : 0;
	printf("is 3 smaller than 2 ?%d\n", 3 < 2 ? 1 : 0);

	// ,(�޸� ������)
	//----------------------------------------------
	int commaResult = 0, a = 0, b = 0;
	commaResult = a = 3, b=4;
	printf("commaResult %d, a= %d, b=%d \n", commaResult, a, b);

	//sizeof() (������ ���� ������)
	// �޸𸮰������� �Ҹ��ϴ� �޸�ũ�⸦ ����Ʈ ������ ����ؼ� ��ȯ�ϴ� ������.
	// �ڷ���, ����, �� ��� ���ڷ� ��밡��
	//-------------------------------------------------------------
	int size_int = sizeof(int);
	int size_size_int = sizeof(size_int);
	int size_intConstant = sizeof(3);
	printf(" % d, % d, % d\n" , size_int, size_size_int, size_intConstant);

	//�������� �켱����
	// ���� > ��� > ���� > �� > ���� > �޸�
    
	// ����ȯ ������
	//-------------------------------------------------- 
	
	// �Ͻ��� ����ȯ 
	// ���α׷��Ӱ� ���� �������� �ʾƵ� �����Ϸ��� ���ؼ� �ڵ����� ó���Ǵ� ����ȯ�� Ī��/ �ڵ���ȯ�̶����
	int num_int = 10;
	short num_short = 2;
	char num_char = 4;
	num_short + num_char; 
	//short(2byte) + char(1byte) �� ������ ������ �ϱ����� �������Ϳ� �����Ͱ� ���޵ɶ� ������ ���� 
	//���������� ����ũ�⸸ŭ �ڵ����� �ڷ����� int������ ��ȯ�� ä�� ������ �ϰ� �� �� (short + char �� �ϸ� ���� int+int �� ������)
	//�̶� short �Ǵ� charó�� ����� ���������� ������ũ�⺸�� ���� �ڷ����� ����� ��������
	//����ũ���� ���·� ������ ũ�Ⱑ Ŀ���°��� �°� (promotion) �̶�� ��
	//�̷���� ���� ���α׷��Ӱ� int ������ �ٲ����� �ʾƵ� �Ǿ �Ͻ��� ����ȯ�̶���.
	//�������� �������ʹ����� 4byte, �Ǽ����� 8byte��
	//������������ 8byte¥���� longlong�� �������͸� �ΰ���
	printf("%d\n", sizeof(num_short + num_char));

	float num_float = 1.2;
	double num_double = 12.34;
	printf("%d\n", sizeof(num_float + num_double));
	printf("%lf\n",num_float+num_double );
	//�����÷ο쿡 ���� �Ͻ��� ����ȯ
	num_float = num_double;
		printf("%f\n", num_float);
 
	 

	// ����� ����ȯ
	// ���ľտ� () �� ���̰� () �ȿ� ��ȯ�� ���������� �����ش�.
		int n;
		float f;
		
		f = (float)5 / 3;
		printf("%f\n", f);
		f = (float)5 / (float)3;
		printf("%f\n", f);

		n = 3.5 + 7.7;
		n = (int)(3.5 + 7.7);

    // �����ڿ��� �غ����Ѱ�
    //1. �پ��� �ڷ��������� ���� ( �Ͻ��� ����ȯ ����)
	//2. ���� ��� ��� �ڷ����� ���ؼ� sizeof()�� ũ�� Ȯ���ϱ�
    //3. 1+2 : �پ��� �ڷ������� �����Ѱ��� sizeof()�� ũ�� Ȯ���ϱ�
	//4. ��Ʈ���� ����� ����ϱ� ���� ����غ��� ��°���� �´��� Ȯ���غ���

	return 0;
}