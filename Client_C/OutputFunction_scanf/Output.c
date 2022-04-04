#include <stdio.h>

int main(void)
{
	// scanf
	// scanf(서식문자열, 변수값 참조)
	// 입력이 들어올때 까지 대기하다가 들어오면 참조한 변수에 해당 입력값을 대입함.
	//int n;
	//printf("정수를 입력하시오:");
	//scanf_s("%d", &n);
	//printf("n : %d\n", n);
	//// & : 참조 연산자
	//// 변수 앞에 붙어서 해당 변수의 주소값을 참조하는 연산자 

	//float f;
	//printf("실수를 입력하시오:");
	//scanf_s("%f", &f);
	//printf("f=%.1f\n", f);
	//

	char str[20];
	printf("문자를 입력하시오:");
	scanf_s("%s", str);
	printf("str: %s", str);
	// sizeof 키워드
	// 사용형태 : sizeof(자료형)
	// 자료형에 해당하는 데이터 크기를 반환함

	//printf("str : %s", str);

	return 0;
}