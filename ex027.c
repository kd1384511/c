#include<stdio.h>

main()
{
	char ch;

	printf("��������́F");
	scanf("%c", &ch);

	if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("�ϊ������ %c", ch + 0x20);
		}
		else
		{
			printf("�ϊ������ %c", ch - 0x20);
		}
	}
	else
	{
		printf("�G���[");
	}
}