#include<stdio.h>
//����ü
//���� �������� ����� ������ �ִ� ����� ���� �ڷ���

//���� :
//struct ����ü�ڷ����̸� {
	//��� ����

//};

 //����ü�� �� ����
struct Coord {
	int x;
	int y;
};
struct Student {
	char name[20];//20byte
	int korean, english, mate;//12byte
	double average;//8byte
	char gender;
};
// ��Ʈ�ʵ�
// �޸� ���� ���� �� �ִ� �������, ù��° ������� ���������� ��Ʈ�� �Ҵ� �� �� �ִ�.
// ��, ���� �ش� ��Ʈ���� �Ѿ�ԵǸ� �����÷ΰ� �߻��ϴ� �����ؼ� ����ؾ��Ѵ�.
// �ش� �ּҿ� �����Ҽ����� . byte������ �ּҰ� �ް����µ� ��Ʈ�ʵ�� bit������ ����ϱ⶧��.

struct Time {
	unsigned int sec : 6;//LSB~Bit5 ���� �Ҵ��. ��Ʈ 6��
	unsigned int min : 6; //Bit6~Bit11
	unsigned int hour : 5; // Bit12~Bit16
};
struct StudentList {
	struct Student students[3];
	int num;
}; studentList;
int main() {
	
	struct Coord coord1;
	// . ������ (��������ڶ����)
	coord1.x = 4;
	coord1.y = 8;
	struct Coord coord2;
	coord2 = coord1;

	coord2.x = 1;
	coord2.y = 2;
	printf("��ǥ1 : (%d, %d)\n", coord1.x, coord1.y);
	printf("��ǥ2 : (%d, %d)\n", coord2.x, coord2.y);
	struct Student std1;
	printf("��Ʃ��Ʈ ����ü�� ����Ʈ ũ�� : %d\n", sizeof(std1));

	struct Student studentA;
	struct Student* student_p;


	//��Ʈ�ʵ�
	struct Time t1;
	printf("%d\n", sizeof(t1));
	
	t1.hour = 5;
	t1.min = 12;
	t1.sec = 45;
	printf("%d:%d:%d\n", t1.hour, t1.min, t1.sec);
	


}