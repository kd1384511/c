#include<stdio.h>

main()
{
	int a, b, c;
	printf("整数を３個入力:");
	scanf("%d%d%d" ,&a, &b, &c);

	//printf("合計　= %d       平均　= %.2f", a + b + c, (a + b + c) / 3.0);
	printf("合計　= %d       平均　= %.2f", a + b + c, (float)(a + b + c) / 3);//キャスト　型変換
}