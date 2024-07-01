#include<stdio.h>

main()
{
	int num, i = 1;

	printf("”‚ÍH");
	scanf("%d", &num);

	do {

		int k = 0;
		do {
			printf(" ");
			k++;
		} while (num - i  >= k);

		int j = 1;
		do {
			printf("*");
			j++;
		} while (j <= i);


		printf("\n");

		i++;
	} while (i <= num);
}