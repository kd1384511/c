#include<stdio.h>

/*==プロトタイプ宣言=====================================*/
void str_Connect(char* p1, char* p2);

/*==エントリポイント=====================================*/
main()
{
	char a[256], b[256];

	printf("配列a:");
	gets(a);

	printf("配列b:");
	gets(b);

	str_Connect(a, b);

	printf("配列a:%s", a);
}

void str_Connect(char* p1, char* p2)
{
	int cnt;
	for (cnt = 0; *(p1+cnt) != '\0'; cnt++);

	while (*p2 != '\0')
	{
		*(p1 + cnt) = *p2++;
		cnt++;
	}
	*(p1 + cnt) = '\0';
}
