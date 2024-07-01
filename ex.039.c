#include<stdio.h>

main()
{
	int num1, num2, num3;
	char a;

	printf("処理を入力：");
	scanf("%c", &a);

	printf("整数を入力：");
	scanf("%d%d%d", &num1, &num2, &num3);

	switch (a)
	{
	case 'd':
		if ((num2  < num1) && (num3 <num1)) {
		printf("最大値は%d", num1);
	}
			else {
		if (num2 > num3) {
			printf("最大値は%d", num2);
		}
		else
		{
			printf("最大値は%d", num3);
		}
	}
			break;
	case 's':
		if ((num2 > num1) && (num3  > num1)) {
			printf("最小値は%d", num1);
		}
		else {
			if (num2 > num3) {
				printf("最小値は%d", num3);
			}
			else
			{
				printf("最小値は%d", num2);
			}
		}
		break;

	case 'g':printf("合計は%d", num1 + num2 + num3);
		break;

	case'h':printf("合計は%.3f", (num1 + num2 + num3) / 3.0);
		break;

	default:
		printf("エラー");
		break;
	}
}