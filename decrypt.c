#include<stdio.h>

main()
{
	char s[11];
	int i = 0;

		printf("暗号文を入力してください（10文字まで）＞");
		scanf("%s", s);

	while (s[i] != '\0')
	{
		s[i] = s[i] - 1;
		i++;
	}

	printf("複合済み文字列は%s", s);
}