#include<stdio.h>

main()
{
	int num, sum = 0, cnt = 0;
	printf("���������:");

	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("���������:");
	}

	printf("���v�F%d\n���ρF%.2f\n", sum, sum / (float)cnt);
}