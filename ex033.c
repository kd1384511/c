#include<stdio.h>

main()
{
	/*int sum = 0, su = 0, num;

	for (int i = 0; su != -999;i++)
	{
		sum += su;
		num = i;
		printf("�������:");
		scanf("%d", &su);
	}
	
	printf("���v�F%d  ���ρF%.2f", sum, sum / (float)num);*/

	int i, num, sum;

	printf("���́H");
	scanf("%d", &num);

	for (sum = 0, i = 0; num != -999; ++i)
	{
		sum += num;
		printf("���́H�F");
		scanf("%d", &num);
	}

	printf("���v = %d\t���� = %.2f", sum, sum / (float)i);
}