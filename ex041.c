#include<stdio.h>

main()
{
	char a[10];
	char b[10];
	char w[10];
	printf("文字列１を入力：");
	scanf("%s", a);
	printf("文字列２を入力：");
	scanf("%s", b);

	printf("moji1 = %s\t", a);
	printf("moji２ = %s\n", b);

	int i;

	//whileのほうが処理少なくかけるよ
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

	printf("入れ替えると\n");

	printf("moji1 = %s\t", a);
	printf("moji2 = %s\n", b);
}