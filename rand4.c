#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));
	a = rand() % 5 + 1;


	printf("‚ ‚È‚½‚Ì‰^¨‚Í");
	while (a > 0)
	{
		printf("š");
		--a;
	}
	printf("‚Å‚·\n");
}