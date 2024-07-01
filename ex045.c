#include<stdio.h>

main()
{
	int gokei, i;

	int a[2][3] = {
		{10,20,30},
		{1,2,3}
	};

	for (gokei = 0, i = 0; i < 3; i++)
	{
		printf("a[0][%d] = %d\n", i, a[0][i]);
		gokei += a[0][i];
	}
	printf("０行目の合計 = %d\n", gokei);
	printf("\n");
	
	for (gokei = 0, i = 0; i < 3; i++)
	{
		printf("a[1][%d] = %d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("1行目の合計 = %d\n", gokei);
	printf("\n");
}