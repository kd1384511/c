#include<stdio.h>

main()
{
	int num, sum = 0, cnt = 0;
	printf("®”‚ğ“ü—Í:");

	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("®”‚ğ“ü—Í:");
	}

	printf("‡ŒvF%d\n•½‹ÏF%.2f\n", sum, sum / (float)cnt);
}