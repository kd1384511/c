#include<stdio.h>

main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b;

	printf("実行前\n");
	printf("a=%d b=%d\n", a, b);

	int tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;

	printf("実行後\n");
	printf("a=%d b=%d\n", a, b);

}