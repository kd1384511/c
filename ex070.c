#include<stdio.h>

main()
{
	int a, b, kotae;

	printf("整数２つ入力:");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);

	printf("答えは%dです。\n",kotae);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}