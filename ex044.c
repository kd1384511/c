
#include<stdio.h>

main()
{
	float sum=0;
	float box[3];

	for (int i = 0; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f", &box[i]);

		sum += box[i];
	}

	printf("合計は %.2f です。\n", sum);
	printf("平均はは %.2f です。", sum/3.0);
}