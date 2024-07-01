#include<stdio.h>

main()
{
	int s;

	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &s);

	if (s <= 5000) {
		if (s >= 0) {
			int h = s / 3600;
			int m = (s % 3600) / 60;
			int s2 = (s % 3600) % 60;

			printf("%d ŠÔ %d •ª %d •b‚Å‚·", h, m, s2);
		}

	}
	else
	{
		printf("ƒGƒ‰[");
	}
}