#include<stdio.h>

main()
{
	char s[11];
	int i = 0;

		printf("ˆÃ†•¶‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢i10•¶š‚Ü‚Åj„");
		scanf("%s", s);

	while (s[i] != '\0')
	{
		s[i] = s[i] - 1;
		i++;
	}

	printf("•¡‡Ï‚İ•¶š—ñ‚Í%s", s);
}