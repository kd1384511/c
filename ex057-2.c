#include<stdio.h>

main()
{
	int a[][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};

	int* p_a, i;
	printf("�Q�����z��̓��e\n");
	for (i = 0; i < 3; i++)
	{
		p_a = a[i];
		printf(" %d ", *(p_a+1));
	}
}