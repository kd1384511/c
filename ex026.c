#include<stdio.h>

main()
{
	//データ構造
	int m;

	//処理手順
	printf("月を入力：");
	scanf("%c", &m);

	if (m == 2)
	{
		printf("最終日は%d月28日です\n",m);
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("最終日は%d月30日です\n",m);
		}
		else
		{
			printf("最終日は%d月31日です\n",m);
		}
	}
}