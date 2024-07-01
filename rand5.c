#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		a = rand() % 300 + 1;
		printf("%3d	",a);
	}
}