#include<stdio.h>
int main()
{
	// 대입연산자
	// 연산자 기준 오른쪽 값을 왼쪽 메모리에 할당함
	//---------------------------------------------------
	int intResult = 0;
	double doubleResult = 0.0;

	//산술 연산자
	//---------------------------------------------------
	// +연산자
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// -연산자
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// *연산자
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// /연산자
	//정수의 나누기 연산은 정수 몫만 반환한다.
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//% 연산자
	intResult = 3 % 4;
	doubleResult = 3 % 4;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//부호 연산자
	intResult = +3;
	intResult = -3;

	//복합 대입연산자
	//--------------------------------------------
	intResult += 0; // 같은표현 : intResult = intResult +3;

    //증감 연산자
	//--------------------------------------------

	//증가 연산자
	printf("Start testing increament operator !\n");
	intResult = 0;
	printf("intResult : %d\n", intResult++);
	printf("intResult : %d\n", intResult);//후위 증가 연산자, 해당 연산자가 포함된 줄을 실행한 후에 연산한다.
	printf("intResult : %d\n", intResult);
	intResult++;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", ++intResult);
	printf("intResult : %d\n", intResult);
	//관계연산자
	//------------------------------------------------------------
	//참이면1 거짓이면 0
	//<,>,==,>=,<=
	printf("is %d smaller than %d ? %d\n", 3, 4, 3 < 4);
	//논리 연산자
	// 참의 기준 : 0이아님
	// 거짓의 기준 : 0
	//--------------------------------------------------
	int grade = 80;
	//&&(and 연산자)
	//피연산자 두개중에 하나만 참이면
	printf("is %d 30<Grade and 80 > Grade ? %d \n", grade, (30 < grade) && (80 > grade));
	//||(or 연산자)
	//피연산자 두개중에 하나라도 참이면 1 나머지경우 전부 0
	printf("is %d 30<Grade or 80 > Grade ? %d \n", grade, (30 < grade) || (80 > grade));
	//! (not 연산자)
	//단일연산자. ( 피연산자가 하나인 경우 )
	//피연산자 결과를 반전시킨다. 즉, 0이 아니면0, 0이면 1
	printf("is not 30<%d ?%d\n ", grade, !(30 < grade));
	//비트 연산자
	//-----------------------------------------------------------
	





	return 0;
}