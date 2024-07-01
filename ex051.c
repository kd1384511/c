#include<stdio.h>

main()
{
	int a = 50, b = 10;
	int* p_a = &a, * p_b = &b;

	int c = *p_a + *p_b;

	printf("%d+%d=%d", *p_a, *p_b, c);
}