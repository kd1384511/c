#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i = 0, n = 0;
	srand(time(0));

	char s[21];
	int k[21];

	printf("���������͂��Ă���������");
	scanf("%s", s);

	while (s[i] != '\0')
	{
		k[i] = rand() % 6;

		s[i] += k[i];
		i++;
	}

	printf("�Í���������́A%s\n", s);

	printf("�Í����L�[�́A");
	while (n != i)
	{
		printf("%d", k[n]);
		n++;
	}
}