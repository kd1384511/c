#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));
	a = rand() % 5 + 1;


	printf("���Ȃ��̉^����");
	while (a > 0)
	{
		printf("��");
		--a;
	}
	printf("�ł�\n");
}