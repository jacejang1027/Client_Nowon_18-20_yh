#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	//ǥ��������Լ�
	//printf, scanf, putc, getc, puts, gets


	//fopen()
	//�⺻������ ���� ���α׷� ������ �ִ� �������� ������ �˻��Ѵ�.
	//�ϵ��ũ�κ��� ������ �о�鿩�� FILE Stream �� ���ۿ� ����ϴ� �Լ�
	//
	//���� ���� ���
	//r : �б� ����(read mode) : ������ ������ ����
	//w : ���� ����(write mode) : ������ ������ ����
	//a : ���ٿ����� ����(append mode) : ������ ������ ����
	//r+ : �б�/���� �� ���� : ������ ������ ����
	//w+ : �б�/���� �� ���� : ������ ������ ����
	//a+ : �б�/���ٿ����� �� ���� : ������ ������ ����
	//rb : ���̳ʸ� ���� �б� ���� :
	//wb : ���̳ʸ� ���� ���� ���� :
	//ab : ���̳ʸ� ���� ���ٿ� ���� ���� :
	FILE* tp1 = fopen("a.txt", "r");
	// read mod���� FILE*�� NULL�̸� ������ ��ã�Ҵٴ� �ǹ� 
	if (tp1 == NULL) {
		printf("failed to open a txt");
		exit(1);
	}
	printf("%c\n", fgetc(tp1));
	printf("%c\n", fgetc(tp1));
	fclose(tp1);
	//FILE Stream �� ���ۿ� ��ϵǾ��ִ� �ش� ������ ��� ������Ű�� �Լ�
	FILE* tp2 = fopen("b.txt", "r");
	if (tp2 == NULL)
	{
		printf("faile to create b.txt");
		exit(1);

	}
	char doOverwrite = 'N';
	printf("b.txt �� ���� ���ðڽ��ϱ� ? ���� ������ ��� �����˴ϴ� (Y/N)");
	scanf("%c", &doOverwrite);
	if (doOverwrite != 'Y') {
		printf("b.txt�� ����⸦ ����Ͽ����ϴ�. ���α׷��� �����մϴ�.");
		fclose(tp2);
			exit(0);
	}
	
	
	//write mode�� ������ ���� ���� ������ ��� ������.
	//write mode�� ������ ���µ� �����ϸ� �ش� ������ ���� ������.
	tp2 = fopen("b.txt", "w");
	//write mode ���� FILE*�� NULL�̸� ������ �������� ���ߴٴ� �ǹ�.
	if (tp1 == NULL) {
		printf("failed to create a txt");
		exit(1);
	}
	fputc('c', tp2);
	fclose(tp2);//�����忡�� ���ۿ� ����ִ� ������ ���� ������ �����ڸ��� fclose�� ȣ���ϴ°��� �����ϴ�
	//���ۿ��� �����Ǳ� �������� �ϵ��ũ�� ������ ������ �ݿ��� �ȵǱ� ����.

	
	//append mode
	// ������ ������ ������
	FILE* tp3 = fopen("c.txt", "a");
	if (tp3 == NULL) {
		printf("failed to create c. txt");
		exit(1);
	}
	fputc('c', tp3);
	fclose(tp3);

	//�پ��� ������ ���ڿ� �����
	FILE* tp4;
	FILE* tp5;

	char name[20] = "chulsu";
	int korean = 10, english = 20, math = 30;
	double averge;

	tp4 = fopen("chulsu.txt", "r");
	if (tp4==NULL)
	{
		printf("failed to open chulsu txt exit program");
		exit(0);

	}
	tp5 = fopen("youngheui", "w");
	if (tp5==NULL)
	{
		printf("failed to create youngheui. txt. exit program");
		exit(1);

	}

	fscanf(tp4, "%s %d %d %d", name, &korean, &english, &math);
	printf("%s %d %d %d", name, korean, english, math);
	fclose(tp4);

	fprintf(tp5, "%s %d %d %d", name, korean, english, math);
	fclose(tp5);
	

	//��뷮 �������� ������� ������ �ؾ��Ѵٸ�
	//fscanf �� fprintf ó�� ���Ŀ� �°� ������ϴ� �Լ� ����
	//���̳ʸ� ���� �״�� ������ϴ� fread�� fwrite �Լ��� ����Ѵ�.
	FILE* tp6;
	tp6 = fopen("binarry.txt", "wb");
	char a[] = "fsdafdsafdsafdsa";
	fwrite(a, sizeof(a), 1, tp6);
	fclose(tp6);

	return 0; 
}