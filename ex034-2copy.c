#include<stdio.h>

main()
{
	int num;
	

	printf("���́H");
	scanf("%d", &num);

	do {
		int i = 0;
		do {
			
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		num--;
	} while (num > 0);
}