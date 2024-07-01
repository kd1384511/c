#include<stdio.h>

main()
{
	int sum = 0;

	int apa[2][2][3] = {
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}}
	};

	for (int i = 0; i < 2; i++)
	{
		printf("アパート%d", i + 1);
		for (int j = 0; j < 2; j++)
		{
			printf("(%d階)：", j + 1);
			for (int k = 0; k < 3; k++)
			{
				printf("%d　", apa[i][j][k]);
				sum += apa[i][j][k];
			}
		}
		printf("\n");
	}

	printf("全体で %d 人住んでいます", sum);
}