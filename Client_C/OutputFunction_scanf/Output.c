#include <stdio.h>

int main(void)
{
	// scanf
	// scanf(���Ĺ��ڿ�, ������ ����)
	// �Է��� ���ö� ���� ����ϴٰ� ������ ������ ������ �ش� �Է°��� ������.
	//int n;
	//printf("������ �Է��Ͻÿ�:");
	//scanf_s("%d", &n);
	//printf("n : %d\n", n);
	//// & : ���� ������
	//// ���� �տ� �پ �ش� ������ �ּҰ��� �����ϴ� ������ 

	//float f;
	//printf("�Ǽ��� �Է��Ͻÿ�:");
	//scanf_s("%f", &f);
	//printf("f=%.1f\n", f);
	//

	char str[20];
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%s", str);
	printf("str: %s", str);
	// sizeof Ű����
	// ������� : sizeof(�ڷ���)
	// �ڷ����� �ش��ϴ� ������ ũ�⸦ ��ȯ��

	//printf("str : %s", str);

	return 0;
}