#include<stdio.h>

main()
{
	int i = 0;
	char data[] = { "Apple\0" };

	printf("1•¶š‚¸‚Âo—Í\n");

	while (data[i] !='\0')
	{
		printf("%c", data[i]);
		i++;
	}

	printf("\n•¶š—ñ‚Åo—Í\n");
	if (data == &data[0]);
	printf("%s", data+1);
}