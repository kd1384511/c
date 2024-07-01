#include<stdio.h>

main()
{
	/*int sum = 0, su = 0, num;

	for (int i = 0; su != -999;i++)
	{
		sum += su;
		num = i;
		printf("数を入力:");
		scanf("%d", &su);
	}
	
	printf("合計：%d  平均：%.2f", sum, sum / (float)num);*/

	int i, num, sum;

	printf("数は？");
	scanf("%d", &num);

	for (sum = 0, i = 0; num != -999; ++i)
	{
		sum += num;
		printf("数は？：");
		scanf("%d", &num);
	}

	printf("合計 = %d\t平均 = %.2f", sum, sum / (float)i);
}