#include<stdio.h>

main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b;

	printf("���s�O\n");
	printf("a=%d b=%d\n", a, b);

	int tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;

	printf("���s��\n");
	printf("a=%d b=%d\n", a, b);

}