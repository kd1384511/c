#include<stdio.h>

main()
{
	int a, b, kotae;

	printf("®”‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);

	printf("“š‚¦‚Í%d‚Å‚·B\n",kotae);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}