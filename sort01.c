#include<stdio.h>

main()
{
	int d[] = { 30,7,25,16,10 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				int w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}