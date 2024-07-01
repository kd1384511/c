#include<stdio.h>

main()
{
	int num, i = 1;

	printf("”‚ÍH");
	scanf("%d", &num);

	do {
		int j = 1;
		do {
			printf("*");
			j++;
		} while (j <= i);

		printf("\n");

		i++;
	} while (i <= num);
}