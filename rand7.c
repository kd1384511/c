#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n,num,count=0;

	srand(time(0));
	n = rand() % 1000 + 1;

	printf("�P�`�P�O�O�O�̒��ł�����̐���\�z���Ă�������\n");

	do{
		printf("������̐��́H->");
		scanf("%d", &num);

		if (num > n)
		{
			printf("������̐����傫���ł�\n");
		}
		if (num < n)
		{
			printf("������̐���菬�����ł�\n");
		}

		count++;
	} while (n != num);

	printf("�����I%d��ڂł�����܂����I\n",count);
}