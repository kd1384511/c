#include<stdio.h>

main()
{
	int num1, num2, num3;
	char a;

	printf("��������́F");
	scanf("%c", &a);

	printf("��������́F");
	scanf("%d%d%d", &num1, &num2, &num3);

	switch (a)
	{
	case 'd':
		if ((num2  < num1) && (num3 <num1)) {
		printf("�ő�l��%d", num1);
	}
			else {
		if (num2 > num3) {
			printf("�ő�l��%d", num2);
		}
		else
		{
			printf("�ő�l��%d", num3);
		}
	}
			break;
	case 's':
		if ((num2 > num1) && (num3  > num1)) {
			printf("�ŏ��l��%d", num1);
		}
		else {
			if (num2 > num3) {
				printf("�ŏ��l��%d", num3);
			}
			else
			{
				printf("�ŏ��l��%d", num2);
			}
		}
		break;

	case 'g':printf("���v��%d", num1 + num2 + num3);
		break;

	case'h':printf("���v��%.3f", (num1 + num2 + num3) / 3.0);
		break;

	default:
		printf("�G���[");
		break;
	}
}