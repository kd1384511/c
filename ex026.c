#include<stdio.h>

main()
{
	//�f�[�^�\��
	int m;

	//�����菇
	printf("������́F");
	scanf("%c", &m);

	if (m == 2)
	{
		printf("�ŏI����%d��28���ł�\n",m);
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("�ŏI����%d��30���ł�\n",m);
		}
		else
		{
			printf("�ŏI����%d��31���ł�\n",m);
		}
	}
}