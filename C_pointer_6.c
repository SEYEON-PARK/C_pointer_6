#include <stdio.h>

int main(void)
{
	int* a;
	int b = 10;
	a = &b;

	printf("%d\n", a);
	printf("%d\n", ++a); //int���̱� ������ +4�� �ȴ�.
	printf("%d\n", b);
	printf("%d\n", b++);
	printf("%d\n", ++b);

	return 0;
}