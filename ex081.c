#include<stdio.h>

/*==プロトタイプ宣言===========================*/
void Get_MaxMin(int* p, int size, int* max, int* min);

/*==エントリポイント===========================*/
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },max,min;
	Get_MaxMin(data, 8, &max, &min);
	printf("最大値 = %d\n最小値 = %d\n", max, min);
}

/*==配列の最大値と最小値を求める====================*/
/*仮引数：配列の先頭アドレス　要素数                                               */
/*　　　　最大値を入れる変数　最小値を入れる変数                            */
/*=======================================*/
void Get_MaxMin(int* p, int size, int* max, int* min)
{
	*max = *p;
	*min = *p;

	for (int i = 0; i < size; i++)
	{
		if (*max < *(p + i))*max = *(p + i);
		if (*min > *(p + i))*min = *(p + i);
	}
}