#include<stdio.h>

main()
{
	int a;//���f�p
	int num1, num2;//�v�Z�p

	printf("���Z�q�����:");
	scanf("%d", &a);

	
	printf("2�̉��Z�q�����:");
	scanf("%d%d", &num1, &num2);

	if (a == 1)
	{
		printf("%d\n", num1 + num2);
	}
	else
	{
		if (a == 2)
		{
			printf("%d\n", num1 - num2);
		}
		else
		{
			if (a == 3)
			{
				printf("%d\n", num1 * num2);
			}
			else
			{
				if (a == 4)
				{
					printf("%.2f\n", (float)num1 / (float)num2);
				}
				else
				{
					printf("1����4�܂ł���{�P");
				}
			}
		}
	}
}