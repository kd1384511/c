#include<stdio.h>

main()
{
	int i = 0;
	char data[] = { "Apple\0" };

	printf("1文字ずつ出力\n");

	while (data[i] !='\0')
	{
		printf("%c", data[i]);
		i++;
	}

	printf("\n文字列で出力\n");
	if (data == &data[0]);
	printf("%s", data+1);
}