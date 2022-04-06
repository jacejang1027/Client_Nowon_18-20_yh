#include<stdio.h>
#include"Operation Functions.h"
#include"sumFunction.h"
#include"subFuntion.h"


int opcount;
//static (정적) 키워드
//메모리 동적 할당을 불가능하게하는 키워드
//인스턴소화가 불가능하게하는 키워드

//정적 전역 변수
//다른 소스파일에서 참조할수 없는 전역변수

int main() {

	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", opcount);

	return 0;
}



	
	
