#include<stdio.h>

main()
{
	char ch;

	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &ch);

	if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("•ÏŠ·‚·‚é‚Æ %c", ch + 0x20);
		}
		else
		{
			printf("•ÏŠ·‚·‚é‚Æ %c", ch - 0x20);
		}
	}
	else
	{
		printf("ƒGƒ‰[");
	}
}