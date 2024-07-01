#include<stdio.h>


main()
{
	int s;

	printf("秒数を入力：");
	scanf("%d", &s);

	if (s <= 5000) {
		//5000以下
		if (s >= 0) {
			//0以上 変数の定義と時間を表示
			int h = s / 3600;
			int m = (s % 3600) / 60;
			int s2 = (s % 3600) % 60;

			printf("%d 時間 %d 分 %d 秒です", h, m, s2);
		}
		else
		{
			//負の数の入力
			//処理を実行しない
			printf("マイナスはエラーです");
		}

	}
	else
	{
		//予期しない文字の入力 or 5000を超える整数
		//処理を実行しない
		printf("エラー");
	}
}