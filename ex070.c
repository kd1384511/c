#include<stdio.h>

main()
{
	int a, b, kotae;

	printf("�����Q����:");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);

	printf("������%d�ł��B\n",kotae);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}