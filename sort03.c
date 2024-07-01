#include<stdio.h>

main()
{
	int d[] = { 30,7,25,16,10 };
	

	for (int i = 1; i < 5; i++)
	{
		for (int j = i; j >0; j--)
		{
			if (d[j - 1] < d[j])
			{
				break;
			}
			else 
			{
				int w = d[j];
				d[j] = d[j - 1];
				d[j - 1] = w;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}

}