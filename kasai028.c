#include<stdio.h>

int main(void)
{
	int i = 0, num;
	int a[10];

	while (1)
	{
		printf("%d件目の入力：", i+1);
		scanf("%d", &num);
		if (num < 0 || num>100)
		{
			printf("入力値は「０以上１００以下」にしてください\n");
			continue;
		}
		a[i] = num;
		i++;
		if (i == 10)break;
	}

	printf("\n配列内容一覧\n");

	for (int j = 0; j < 10; j++)
	{
		printf("%d件目：%d\n", j + 1, a[j]);
	}
}