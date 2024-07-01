#include<stdio.h>

#define SIZE_a 6
#define SIZE_b 4

main()
{
	int a[SIZE_a] = { 11,22,33,44,55,66 };
	float b[SIZE_b] = { 11.1,22.2,33.3,44.4 };
	int* p_a = a, isum = 0;
	float* p_b = b, dsum = 0;

	for (int i = 0; i < SIZE_a; i++)
	{
		isum += *(p_a + i);
	}
	for (int i = 0; i < SIZE_b; i++)
	{
		dsum += *(p_b + i);
	}

	printf("配列a\t合計 = %d\t平均 = %.3f\n", isum, isum / 6.0);
	printf("配列b\t合計 = %.3f\t平均 = %.3f\n", dsum, dsum / 4.0);
}