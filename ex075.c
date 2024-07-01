#include<stdio.h>

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syou,int* jyou);

main()
{
	int a, b, c, d, e, f,g;

	printf("”’l‚PF");
	scanf("%d", &a);
	printf("”’l‚QF");
	scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f,&g);

	printf("”’l‚P‚Æ”’l‚Q‚Ìl‘¥‰‰Z\n");
	printf("wa=%d sa=%d sk=%d syou = %d jyou=%d\n", c, d, e, f,g);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syou,int* jyou)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syou = x / y;
	*jyou = x % y;

	return;
}
