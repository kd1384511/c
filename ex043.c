#include<stdio.h>

main()
{
	char str[] = { "orange" };
	int i;

	for (i = 0; str[i] != '\0'; i++);

	printf("文字列は%d文字です。", i);
}