#include<stdio.h>

/*==記号定数　配列の要素数======================*/
#define TBL_END 5

/*==プロトタイプ宣言==========================*/
int tbl_gokei4(int* p);

/*==エントリーポイント=========================*/
main()
{
	int a[] = { 10,20,30,40,50 };
	int gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);
}

/*==合計を求める=============================*/
/*仮引数：配列の先頭アドレス                                                           */
/*=======================================*/
int tbl_gokei4(int* p)
{
	int gokei = 0;
	for (int i = 0; i < TBL_END; i++)
	{
		gokei += *(p + i);
	}
	return gokei;
}