#include<stdio.h>

main()
{
	char a;

	printf("���Z�q������");
	scanf("%c", &a);

	switch (a)
	{
	case '+':printf("���Z�ł�");
		break;
	case '-':printf("���Z�ł�");
		break;
	case '*':printf("��Z�ł�");
		break;
	case '/':printf("���Z�ł�");
		break;
	case '%':printf("�]��ł�");
		break;
	default:printf("���̑��ł�");
		break;
	}
}