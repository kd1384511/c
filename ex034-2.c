#include<stdio.h>

main()
{
	int num;

	printf("”‚ÍH");
	scanf("%d", &num);

	do {
		for (int i = 0; i < 5; i++) {
			printf("*");
		}
		printf("\n");
		num--;
	} while (num > 0);
}