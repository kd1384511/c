#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n,num,count=0;

	srand(time(0));
	n = rand() % 1000 + 1;

	printf("‚P`‚P‚O‚O‚O‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");

	do{
		printf("‚ ‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &num);

		if (num > n)
		{
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		if (num < n)
		{
			printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}

		count++;
	} while (n != num);

	printf("³‰ğI%d‰ñ–Ú‚Å‚ ‚½‚è‚Ü‚µ‚½I\n",count);
}