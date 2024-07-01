#include<stdio.h>

main()
{
	char a[10];
	char b[10];
	char w[10];
	printf("•¶š—ñ‚P‚ğ“ü—ÍF");
	scanf("%s", a);
	printf("•¶š—ñ‚Q‚ğ“ü—ÍF");
	scanf("%s", b);

	printf("moji1 = %s\t", a);
	printf("moji‚Q = %s\n", b);

	int i;

	//while‚Ì‚Ù‚¤‚ªˆ—­‚È‚­‚©‚¯‚é‚æ
	for (# i = 0; w[i] = a[i]; i++);
	w[i] = '\0';
	for (i = 0; b[i] != '\0'; i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';
	for (i = 0; w[i] != '\0'; i++)
	{
		b[i] = w[i];
	}
	b[i] = '\0';

	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");

	printf("moji1 = %s\t", a);
	printf("moji2 = %s\n", b);
}