#include<stdio.h>
//구조체
//여러 변수들을 멤버로 가질수 있는 사용자 정의 자료형

//형태 :
//struct 구조체자료형이름 {
	//멤버 선언

//};

 //구조체는 값 참조
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
// 비트필드
// 메모리 낭비를 줄일 수 있는 방법으로, 첫번째 멤버부터 순차적으로 비트를 할당 할 수 있다.
// 단, 값이 해당 비트수를 넘어가게되면 오버플로가 발생하니 유의해서 사용해야한다.
// 해당 주소에 접근할수없다 . byte단위로 주소가 메겨지는데 비트필드는 bit단위로 사용하기때문.

struct Time {
	unsigned int sec : 6;//LSB~Bit5 까지 할당됨. 비트 6개
	unsigned int min : 6; //Bit6~Bit11
	unsigned int hour : 5; // Bit12~Bit16
};
struct StudentList {
	struct Student students[3];
	int num;
}; studentList;
int main() {
	
	struct Coord coord1;
	// . 연산자 (멤버연산자라고함)
	coord1.x = 4;
	coord1.y = 8;
	struct Coord coord2;
	coord2 = coord1;

	coord2.x = 1;
	coord2.y = 2;
	printf("좌표1 : (%d, %d)\n", coord1.x, coord1.y);
	printf("좌표2 : (%d, %d)\n", coord2.x, coord2.y);
	struct Student std1;
	printf("스튜던트 구조체의 바이트 크기 : %d\n", sizeof(std1));

	struct Student studentA;
	struct Student* student_p;


	//비트필드
	struct Time t1;
	printf("%d\n", sizeof(t1));
	
	t1.hour = 5;
	t1.min = 12;
	t1.sec = 45;
	printf("%d:%d:%d\n", t1.hour, t1.min, t1.sec);
	


}