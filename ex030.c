#include<stdio.h>

main()
{
	int num;
	int i = 0;

	printf("数を入れて：");
	scanf("%d", &num);

	while (i <= 10)
	{
		printf("%d + %d = %d\n", num, i, num + i);
		++i;
	}
}