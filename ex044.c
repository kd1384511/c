
#include<stdio.h>

main()
{
	float sum=0;
	float box[3];

	for (int i = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f", &box[i]);

		sum += box[i];
	}

	printf("���v�� %.2f �ł��B\n", sum);
	printf("���ς͂� %.2f �ł��B", sum/3.0);
}