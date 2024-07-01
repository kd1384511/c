#include<stdio.h>

main()
{
	int d[] = { 30,7,25,16,10 };

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				int w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}