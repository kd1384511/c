#include<stdio.h>

/*==プロトタイプ宣言===================================*/
int  tbl_gokei3(int tbl[], int number);

/*==エントリーポイント==================================*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a, 5);
	printf("gokei = %d\n", gokei);
}

/*==配列の合計を求める==================================*/
/*配列の先頭アドレス　要素数　を受け取る                                                              */
/*=============================================== */
int  tbl_gokei3(int tbl[], int number)
{
	int gokei = 0;
	for (int i = 0; i < number; i++)
	{
		gokei += tbl[i];
	}

	return gokei;
}
