#include<stdio.h>

main()
{
	char s[21];
	int i = 0;

	printf("���������͂��Ă���������");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		int num;
		printf("s[%d]�̕����L�[>",i);
		scanf("%d", &num);

		s[i] = s[i] - num;

		i++;
	}

	printf("�������ςݕ�����́A%s", s);
}