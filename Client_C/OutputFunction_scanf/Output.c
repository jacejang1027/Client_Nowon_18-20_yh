#include<stdio.h>
int main()
{
	// scanf
	// scanf(���Ĺ��ڿ�,��������)
	// �Է��� ���ö� ���� ����ϴٰ� ������ ������ ������ �ش� �Է°��� ������.
	int n;
	scanf_s("%d", &n);
	//& : ���� ������
	//���� �տ� �پ �ش� ������ �ּҰ��� �����ϴ� ������

	float f;
	scanf_s("%f", &f);

	char str[20];
	scanf_s("%s", str, 10*sizeof(char));
	//sizeof Ű����
	//������� : sizeof(�ڷ���)
    //�ڷ����� �ش��ϴ� ������ ũ�⸦ ��ȯ��
	printf("%s", str);
	





	return 0;

}