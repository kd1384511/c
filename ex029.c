#include<stdio.h>

main()
{
	int i = 0;
	int num;

	printf("�������āF");
	scanf("%d", &num);

	while (i < num)
	{
		printf("*");
		++i;
	}
}