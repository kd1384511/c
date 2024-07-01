#include<stdio.h>

main()
{
	char data[] = "Language", ch;
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚Í");
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == ch)
		{
			printf("%d ", i + 1);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}