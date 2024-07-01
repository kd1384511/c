#include<stdio.h>

main()
{
	int a[][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};

	int* p_a, i;
	p_a = a[0];
	printf("‚QŽŸŒ³”z—ñ‚Ì“à—e\n");
	for (i = 0; i < 3 * 3; i++)
	{
		printf(" %d ", *p_a++);
		if (i % 3 == 2)
			printf("\n");

	}
}