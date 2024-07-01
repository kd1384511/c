#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i = 0, n = 0;
	srand(time(0));

	char s[21];
	int k[21];

	printf("文字列を入力してください＞");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		k[i] = rand() % 6;

		s[i] += k[i];
		i++;
	}

	printf("暗号化文字列は、%s\n", s);

	printf("暗号化キーは、");
	while (n != i)
	{
		printf("%d", k[n]);
		n++;
	}
}