#include<stdio.h>

float heikin(int sum);
int add(int a, int b, int c);

main()
{
	int a, b, c, gokei;
	float avg;
	printf("�����R�����:");
	scanf("%d%d%d", &a, &b, &c);

	gokei = add(a, b, c);
	avg = heikin(gokei);

	printf("���v�� %d�A���ς� %f\n", gokei, avg);
}

int add(int a, int b, int c)
{
	int sum=a + b + c;
	return sum;
}
	

float heikin(int sum)
{
	float avg = sum / 3.0;

	return avg;
}