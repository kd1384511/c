#include<stdio.h>

main()
{
	int s,i=0;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("探索地ｓを入力：");
	scanf("%d", &s);

	while (i < 10)
	{
		if (d[i] == s)break;
		i++;
	}

	if (i >= 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d", i);
	}

}