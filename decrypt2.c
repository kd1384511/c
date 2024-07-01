#include<stdio.h>

main()
{
	char s[21];
	int i = 0;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		int num;
		printf("s[%d]‚Ì•¡‡ƒL[>",i);
		scanf("%d", &num);

		s[i] = s[i] - num;

		i++;
	}

	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s", s);
}