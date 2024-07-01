#include<stdio.h>

#define DCNT 8

main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int gap = DCNT / 2;

	while (gap > 0)
	{
		for (int i = gap; i < DCNT; i++)
		{
			for (int j = i - gap; j >= 0; i -= gap)
			{
				if (d[j] > d[j + gap])break;

				int w = d[j];
				d[j] = d[j + gap];
				d[j + gap] = w;
			}
		}
		gap /= 2;
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", d[i]);
	}

}