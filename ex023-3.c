#include<stdio.h>

main()
{
	int a;//判断用
	int num1, num2;//計算用

	printf("演算子を入力:");
	scanf("%d", &a);

	
	printf("2つの演算子を入力:");
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
					printf("1から4までじゃボケ");
				}
			}
		}
	}
}