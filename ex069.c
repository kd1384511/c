#include<stdio.h>

main()
{
	int num, sum = 0, cnt = 0;
	printf("整数を入力:");

	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("整数を入力:");
	}

	printf("合計：%d\n平均：%.2f\n", sum, sum / (float)cnt);
}