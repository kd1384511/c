#include<stdio.h>

main()
{
	int num;

	printf("”‚ð“ü‚ê‚ÄF");
	scanf("%d", &num);

	while (num>0)
	{
		printf("*");
		--num;
	}
}