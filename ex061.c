#include<stdio.h>
#include<string.h>

main()
{
	char* p_game[3] = { "wii","ds","playstation4" };
	char** p = p_game;

	for (int i = 0; i < 3; i++)
	{
		while (**p)
		{
			printf("%c", **p);
			(*p)++;
		}
		p++;
		printf("\n");
	}
}