#include<stdio.h>

main()
{
	char data[] = "Language", ch;
	printf("���������́H");
	scanf("%c", &ch);
	printf("�������ʂ�");
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == ch)
		{
			printf("%d ", i + 1);
		}
	}
	printf("�����ڂł�\n");
}