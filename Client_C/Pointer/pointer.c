#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	

	////�ּ� : �޸� ���� 
	//// 
	//// & : �ּ� ������
	//int a = 3;
	////scanf("%d", &a);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(a));
	//printf("%d\n", &a);
	//printf("%p\n", &a);

	//// * : ���� ���� ������
	//// �ּ� �տ� �پ �ش� �ּ��� ���� ������.
	//// ���������� : ���� ���� �����ϴ°� ���� ������� �Ѵ� ( ���� R value ��� )
	//printf("%d\n", *&a);
	//printf("%d\n", sizeof(*&a));
	// * : ������
	// �ڷ��� �ڿ� �پ �ش� �ڷ����� �ּҸ� ����Ű�� �ڷ������� �ٲ���
	//int* p;
	//p = &a;
	//printf("%d\n", p);

	//double d = 1.23;
	//printf("%d\n", sizeof(d));
	//double* pd = &d;
	//p = &d;

	//// �����͵� ���� �ڷ����̰�, ������ ������ �ڷ��� ������� 4byte ũ�⸦ �Ҵ�޴´�.
	//// (��, 16��Ʈ ��ǻ�ʹ� 2byte)
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(pd));

	//printf("size of *p %d\n", sizeof(*p));
	//printf("size of *pd %d\n", sizeof(*pd));

	//double* pd1, *pd2, d1, d2;
	//d1 = 2.0;
	//d2 = 4.0;
	//pd1 = &d1;
	//pd2 = &d2;
	//
	//printf("%.1lf",  d1 + d2);
	//printf("%.1lf", *pd1 + *pd2);
	//printf("%.1lf", *pd1 + d2);
	//printf("%.1lf", d1 + *pd2);

	//����� ������
	//���� : const �ڷ���*
	//�����͸� �ٲܼ� ���ٴ°� �ƴ϶�, �����Ͱ� ����Ű�� �ش� �ּ��� ���� �ٲܼ� ��������.
	//��, �������������� L-value �� ����Ҽ� ����.
	//int n1 = 0, n2 = 0;
	//const int* pa = &n1;
	//pa = &n2;
	////*pa = 20;// �Ұ���
	//n1 = *pa; //����


	//const int n3 = 0;

	//int n3 = 0;
	//



	return 0;
}