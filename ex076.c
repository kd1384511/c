#include<stdio.h>

void Get_SumAvg(int x, int y, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;

	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);

	Get_SumAvg(a, b, &sum, &avg);

	printf("合計は%d、平均は%.2f\n",sum,avg);
}

void Get_SumAvg(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = *sum / 2.0;
}