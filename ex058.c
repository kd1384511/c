#include<stdio.h>

main()
{
	char data[] = "Language", ch;
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は");
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == ch)
		{
			printf("%d ", i + 1);
		}
	}
	printf("文字目です\n");
}