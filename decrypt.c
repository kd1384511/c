#include<stdio.h>

main()
{
	char s[11];
	int i = 0;

		printf("�Í�������͂��Ă��������i10�����܂Łj��");
		scanf("%s", s);

	while (s[i] != '\0')
	{
		s[i] = s[i] - 1;
		i++;
	}

	printf("�����ςݕ������%s", s);
}