#include<stdio.h>

main()
{
	char s[21];
	int i = 0;

	printf("文字列を入力してください＞");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		int num;
		printf("s[%d]の複合キー>",i);
		scanf("%d", &num);

		s[i] = s[i] - num;

		i++;
	}

	printf("複合化済み文字列は、%s", s);
}