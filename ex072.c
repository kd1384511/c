#include<stdio.h>

void dixplay(int a);

main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	dixplay(a);
}

void dixplay(int a)
{
	printf("���͕��� = %d\n", a);
	return;
}