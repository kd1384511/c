#include<stdio.h>

main()
{
	int s;

	printf("秒数を入力：");
	scanf("%d", &s);

	if (s <= 5000) {
		if (s >= 0) {
			int h = s / 3600;
			int m = (s % 3600) / 60;
			int s2 = (s % 3600) % 60;

			printf("%d 時間 %d 分 %d 秒です", h, m, s2);
		}

	}
	else
	{
		printf("エラー");
	}
}