#include<stdio.h>

main()
{
	int s;

	printf("�b������́F");
	scanf("%d", &s);

	if (s <= 5000) {
		if (s >= 0) {
			int h = s / 3600;
			int m = (s % 3600) / 60;
			int s2 = (s % 3600) % 60;

			printf("%d ���� %d �� %d �b�ł�", h, m, s2);
		}

	}
	else
	{
		printf("�G���[");
	}
}