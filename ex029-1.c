#include<stdio.h>

main()
{
	int num;

	printf("�������āF");
	scanf("%d", &num);

	while (num>0)
	{
		printf("*");
		--num;
	}
}