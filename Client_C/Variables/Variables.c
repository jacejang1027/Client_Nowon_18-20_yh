#include<stdio.h>
int main(void) {
	// 키워드 (예약어)
	// 내부적으로 문법을 위한 용도로 정의되어있는 단어. 
	//'자료형' '식별자이름(변수이름)'
	// 변수이름으로 키워드는 사용할수 없다.
	


	// 정수형 변수
	int a; //4byte. 부호가 있는 정수 자료형
	unsigned int ua; //4byte 다른 자료형에도 앞에 붙어서 부호없는 형태로 사용 가능하게 한다
	short s; //2byte. 부호가 있는 정수 자료형
	long l; //4byte. 부호가 있는 정수 자료형
	long long ll; //8byte 이상, 부호가 있는 정수 자료형 (사용잘안함)
	char c; //1byte(대부분) , 문자 자료형
	//int long 차이 원래 int는 2byte였음 그당시 long 으로 사용 / 현재는 int도 4byte
            	
			// = :대입연산자 오른쪽에있는 값을 왼쪽에 있는 변수에 대입하는 연산자
	        // 변수에 값을 써 넣어야 할때는 공간으로 변수의 값을 써야할때는 값으로
			// 초기화 : 선언된 변수에 가장 처음으로 값을 대입하는 행위 ( 쓰레기값을 없애기 위해서 ) 변수선언과동시에 초기화!!!
	        // 쓰레기값 : 확보한 메모리 공간에 남아있는 알수없는 값
	a = 4;
	ua = 0;
	c = 1232; // -128~ 127까지 범위, 1232를 대입하면 오버플로우가 발생함.
	s = 1232;
	printf("%d\n", a);
	printf("%d\n", ua);
	printf("%d\n", c);
	printf("%d\n", s);

	//변수 선언과 동시에 초기화

	//실수형 변수 선언
	float f; // 4byte , 부호가 있는 실수 자료형
	double d; // 8byte , 부호가 있는 실수 자료형
	long double ld; //8byte이상 , 운영체제에 따라 다름.

	f = 1.23456789123456789123456789;
	d = 1.23456789123456789123456789;
	ld = 1.23456789123456789123456789;
	
	printf("%.30f\n", f);
	printf("%.30lf\n", d);
	printf("%.30llf\n", ld);

    //배열(Array)
	//===================================

	//1차원배열
	int arr1x_1[3] = { 1, 2, 3 };
	int arr1x_2[3] = { 1, 2 };
	double arr1x_3[3] = { 4.4, 5.5, 6.2 };

	printf("%d\n", arr1x_1[0]);
	printf("%d\n", arr1x_1[1]);
	printf("%d\n", arr1x_1[2]);
	
	
	//2차원배열
	short arr2x_1[4][3] = { {1,2,3},
		                    {4,5,6},
		                    {7,8,9},
		                    {0,1,2} };
	short arr2x_2[2][3] = { 1, 2, 3, 4 ,5 ,6 };//이렇게해도 똑같이 들어감
	short arr2x_3[4][2] = { 1, 2, 3, 4, 5 ,6, 7 };
	
	printf("%d\n", arr2x_3[3][1]);//배열이름[열 인덱스][행인덱스]
	//short arr2x_4[2][]={1,2,3,4}; error
	//배열은 초기화 할때 열의 크기를 정해주면 컴파일러가 배열의 크기는 알아서 확보한다

	// 문자열 (문자의 배열)
	// 문자열은 배열 마지막에 null 문자가 붙는다.
	//==============================================
	//char str1[5 ] = "hello";
	//char str2[3] = "bye";
	//printf("%c", str1[4]); 공간이 없어서 밑줄이쳐짐/ null문자를 추가하는 이유
	char str1[20] = "hello";
	char str2[6] = "hello";
	char str3[5] = "hello";//null 문자가 들어갈 공간이 확보되지않음.
	char str4[] = "hello";
	char str5[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	printf("%c\n", str5[0]);
	printf("%s\n", str5);

	//함수 호출 형태
	//함수이름 (인자);

	//strcpy 줄을 바꿔주며 해당문자열변수 밑에 대입
	//strcpy(문자열 변수, 문자열 값) : 문자열 변수에 문자열 값을 대입.
	strcpy(str1, "I don't know you");
	printf("%s\n", str1);
	// strien(문자열 값): 문자열 값의 길이를 반환
	strien(str1);
	printf("%d\n", strien(str1));
	printf("%d\n", strien("I don't know you"));
	// strcmp(문자열값1, 문자열값2) : 문자열을 아스키코드로 변환했을때 문자열값1이 더크면 양수반환,
	//같으면 0반환, 작으면-1반환



	return 0;
}