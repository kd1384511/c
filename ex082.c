#include<stdio.h>
#include<string.h>

/*==�v���g�^�C�v�錾===================================*/
void Sort(int* p,char*str);

/*==�G���g���|�C���g===================================*/
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char str[10];

	printf("�\�[�g���������:");
	scanf("%s", str);

	Sort(data, str);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

}

/*==�������~���Ƀ\�[�g����===============================*/
/*�������F�z��̐擪�A�h���X�@�������~��                                                            */
/*===============================================*/
void Sort(int* p, char* str)
{
	if (strcmp(str, "����") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(p + i) > *(p + j))
				{
					int w = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}
	}
	if (strcmp(str, "�~��") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(p + i) < *(p + j))
				{
					int w = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = w;
				}
			}
		}

	}
}