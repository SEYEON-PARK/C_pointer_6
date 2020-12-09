#include <stdio.h>

int main(void)
{
	int* a;
	int b = 10;
	a = &b;

	printf("%d\n", a);
	printf("%d\n", ++a); //int형이기 때문에 +4가 된다.
	printf("%d\n", b);
	printf("%d\n", b++);
	printf("%d\n", ++b);

	return 0;
}