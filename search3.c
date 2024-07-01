#include<stdio.h>

main()
{
	int s,mid,low,high;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("’Tõ’l‚“‚ð“ü—ÍF");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (!(low > high))
	{
		mid = (high + low) / 2;

		if (d[mid] == s)break;

		if (d[mid] < s)
			low = mid + 1;
		else
		{
			high = mid - 1;
		}
	}

	if (low>high)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("d[%d]‚ÅŒ©‚Â‚©‚è‚Ü‚µ‚½\n",mid);
	}
}