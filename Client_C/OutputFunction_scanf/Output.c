#include<stdio.h>
int main()
{
	// scanf
	// scanf(서식문자열,변수참조)
	// 입력이 들어올때 까지 대기하다가 들어오면 참조한 변수에 해당 입력값을 대입함.
	int n;
	scanf_s("%d", &n);
	printf("n : %d", &n);
	//& : 참조 연산자
	//변수 앞에 붙어서 해당 변수의 주소값을 참조하는 연산자

	float f;
	scanf_s("%f", &f);

	char str[20];
	scanf_s("%s", str, 10*sizeof(char));
	//sizeof 연산자
	//사용형태 : sizeof(자료형)
    //자료형에 해당하는 데이터 크기를 반환함
	printf("%s", str);
	







	return 0;

}