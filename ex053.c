#include<stdio.h>

main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b;

	printf("é¿çsëO\n");
	printf("*p_a=%d *p_b=%d\n", *p_a, *p_b);

	p_a = &b;
	p_b = &a;

	printf("é¿çså„\n");
	printf("*p_aa=%d *p_b=%d\n", *p_a, *p_b);

}