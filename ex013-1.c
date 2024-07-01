#include<stdio.h>

main()
{
	char moji1 = '5';
	char moji2 = '6';

	printf("%c * %c = %d\n", moji1, moji2,(moji1-0x30)*(moji2-0x30));
}