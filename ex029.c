#include<stdio.h>

main()
{
	int i = 0;
	int num;

	printf("数を入れて：");
	scanf("%d", &num);

	while (i < num)
	{
		printf("*");
		++i;
	}
}