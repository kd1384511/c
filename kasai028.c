#include<stdio.h>

int main(void)
{
	int i = 0, num;
	int a[10];

	while (1)
	{
		printf("%d���ڂ̓��́F", i+1);
		scanf("%d", &num);
		if (num < 0 || num>100)
		{
			printf("���͒l�́u�O�ȏ�P�O�O�ȉ��v�ɂ��Ă�������\n");
			continue;
		}
		a[i] = num;
		i++;
		if (i == 10)break;
	}

	printf("\n�z����e�ꗗ\n");

	for (int j = 0; j < 10; j++)
	{
		printf("%d���ځF%d\n", j + 1, a[j]);
	}
}