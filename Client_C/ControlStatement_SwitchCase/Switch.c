#include <stdio.h>

// switch - case 조건문 : 경우에 따라 흐름을 제어함
//형태 : switch ( 조건 매개변수)
// case 조건1 : 조건매개변수 = 조건1일때 실행할경우
// case 조건2 : 조건매개변수 = 조건2일때 실행할경우
// case 조건3 : 조건매개변수 = 조건3일때 실행할경우
// default : 그 외


int main(void)
   
{
	// n 부터 10까지 더하는 문장
	int n = 2;
	int sum = 0;
	switch (n) //n = case 번호
	{
	case 1:
		sum += 20;
	case 2:
		sum += 20;
	case 3:
		sum += 20;
	case 4:
		sum += 20;
	case 5:
		sum += 20;

	default:
		break;
		
	}
	printf("%d\n", sum);
	// 알파벳 부르기
	char character;
	printf("알파벳을 입력하세요 : ");
	scanf_s("%c", &character, 3);
	

	switch (character)
	{
		
	case 'A':
		printf("%c says : I'm here! \n", character);
		break; //break 분기문 : 가장 가까운 반복문을 종료함
	case 'B':
		printf("%c says : I'm here! \n", character);
		break;
	case 'C':
		printf("%c says : I'm here! \n", character);
		break;
	case 'D':
		printf("%c says : I'm here! \n", character);
		break;
	default:
		printf("Who r u %c ? \n", character);
		break;
	}



	return 0;

}