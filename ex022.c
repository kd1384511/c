#include<stdio.h>

main()
{
	int year;
	printf("西暦を入力:");
	scanf("%d", &year);

	if (year > 1988)
	{
		printf("平成生まれです");
	}
	else
	{
		printf("昭和生まれです");
	}
}