#include<stdio.h>

main()
{
	float gokei = 0;


	int a[2][3] = {
		{10,20,30},
		{1,2,3}
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%ds–Ú‚Ì‡Œv = %d\n",i, gokei);
		printf("\n");
		gokei = 0;
	}
}