#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n,num,count=0;

	srand(time(0));
	n = rand() % 1000 + 1;

	printf("１〜１０００の中であたりの数を予想してください\n");

	do{
		printf("あたりの数は？->");
		scanf("%d", &num);

		if (num > n)
		{
			printf("あたりの数より大きいです\n");
		}
		if (num < n)
		{
			printf("あたりの数より小さいです\n");
		}

		count++;
	} while (n != num);

	printf("正解！%d回目であたりました！\n",count);
}