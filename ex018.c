#include<stdio.h>

main()
{
	int a, b, c;
	printf("�������R����:");
	scanf("%d%d%d" ,&a, &b, &c);

	//printf("���v�@= %d       ���ρ@= %.2f", a + b + c, (a + b + c) / 3.0);
	printf("���v�@= %d       ���ρ@= %.2f", a + b + c, (float)(a + b + c) / 3);//�L���X�g�@�^�ϊ�
}