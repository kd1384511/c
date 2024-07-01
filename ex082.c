#include<stdio.h>
#include<string.h>

/*==プロトタイプ宣言===================================*/
void Sort(int* p,char*str);

/*==エントリポイント===================================*/
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char str[10];

	printf("ソート方向を入力:");
	scanf("%s", str);

	Sort(data, str);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

}

/*==昇順か降順にソートする===============================*/
/*仮引数：配列の先頭アドレス　昇順か降順                                                            */
/*===============================================*/
void Sort(int* p, char* str)
{
	if (strcmp(str, "昇順") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(p + i) > *(p + j))
				{
					int w = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}
	}
	if (strcmp(str, "降順") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(p + i) < *(p + j))
				{
					int w = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}

	}
}