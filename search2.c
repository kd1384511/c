#include<stdio.h>

main()
{
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int num,i=0;


	printf("探索値ｓを入力：");
	scanf("%d", &num);

	data[10] = num;


	while (data[i] != data[10])
		i++;


	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("data[%d]で見つかりました\n", i);
	}
}