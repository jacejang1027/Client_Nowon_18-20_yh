#include "subFuntion.h"
//extern 키워드
//다른 소스파일에 정의된 전역변수를 참조해서 쓰고싶을때
//해당 전역변수 선언 앞에 extern 키워드를 붙인다.
//데이터 영역에 해당 인덱스 이름으로 선언된 변수가 있으면 해당 변수를 참조
extern int opcount;
int sub_int(int a, int b) {
	return a - b;
}
double sub_double(double a, double b) {
	return a - b;

}