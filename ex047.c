#include<stdio.h>

main()
{
	float x[3][2];
	float gokei;
	int i;

	for (i = 0; i < 3; i++)
	{
		gokei = 0;
		for (int j = 0; j < 2; j++)
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%d s–Ú‚Ì‚Ì•½‹Ï = %.2f\n\n", i, (float)gokei / 2);
	}
}