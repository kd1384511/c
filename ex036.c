#include<stdio.h>

main()
{
	printf("break test program\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			break;
		}
		printf("%2d ", i);
	}

	printf("\n");

	printf("continue test program\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			continue;
		}
		printf("%2d ", i);
	}
}