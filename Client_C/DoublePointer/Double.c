#include <stdio.h>

int main(void) {

	int a = 3;
	int* p = &a;
	int** pp = &p;

	printf("%p\n", p);
	printf("%p\n", pp);

	return 0;
}