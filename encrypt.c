#include<stdio.h>

main()
{
	char s[11];
	int i = 0;

	printf("文字列を入力してください（10文字まで）＞");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		s[i] = s[i] + 1;
		i++;
	}

	printf("暗号化文字は%s", s);
}