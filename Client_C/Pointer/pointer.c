#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	

	////주소 : 메모리 번지 
	//// 
	//// & : 주소 연산자
	//int a = 3;
	////scanf("%d", &a);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(a));
	//printf("%d\n", &a);
	//printf("%p\n", &a);

	//// * : 간접 참조 연산자
	//// 주소 앞에 붙어서 해당 주소의 값을 참조함.
	//// 직접참조는 : 값을 직접 참조하는걸 직접 참조라고 한다 ( 변수 R value 사용 )
	//printf("%d\n", *&a);
	//printf("%d\n", sizeof(*&a));
	// * : 포인터
	// 자료형 뒤에 붙어서 해당 자료형을 주소를 가리키는 자료형으로 바꿔줌
	//int* p;
	//p = &a;
	//printf("%d\n", p);

	//double d = 1.23;
	//printf("%d\n", sizeof(d));
	//double* pd = &d;
	//p = &d;

	//// 포인터도 변수 자료형이고, 포인터 변수는 자료형 상관없이 4byte 크기를 할당받는다.
	//// (단, 16비트 컴퓨터는 2byte)
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

	//상수형 포인터
	//형태 : const 자료형*
	//포인터를 바꿀수 없다는게 아니라, 포인터가 가리키는 해당 주소의 값을 바꿀수 없도록함.
	//즉, 간접참조연산을 L-value 로 사용할수 없다.
	//int n1 = 0, n2 = 0;
	//const int* pa = &n1;
	//pa = &n2;
	////*pa = 20;// 불가능
	//n1 = *pa; //가능


	//const int n3 = 0;

	//int n3 = 0;
	//



	return 0;
}