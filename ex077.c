#include<stdio.h>

void Get_MaxMin(int a, int b, int c,int*max,int*min);

main()
{
	int a, b, c,max,min;
	printf("®”‚R‚Â‚ð“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);

	Get_MaxMin(a, b, c, &max, &min);

	printf("Å‘å’l = %d\tÅ¬’l = %d\n", max, min);
}
void Get_MaxMin(int a, int b, int c, int* max, int* min)
{
	//if (a > b && a > c)
	//{
	//	*max = a;
	//	if (b < c)*min = b;
	//	else*min = c;
	//}
	//if (b > a &&b > c)
	//{
	//	*max = b;
	//	if (a < c)*min = a;
	//	else*min = c;
	//}
	//if (c> a &&c > b)
	//{
	//	*max = c;
	//	if (b < a)*min = b;
	//	else*min = a;
	//}

	*max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	*min = a < b ? (a < c ? a : c) : (b < c ? b : c);
}