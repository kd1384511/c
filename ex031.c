#include<stdio.h>

main()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i;
		printf("1から%2dまでの和=%d\n", i,sum);
	}
}