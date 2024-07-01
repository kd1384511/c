#include<stdio.h>

void Get_SumAvg(int x, int y, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;

	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);

	Get_SumAvg(a, b, &sum, &avg);

	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n",sum,avg);
}

void Get_SumAvg(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = *sum / 2.0;
}