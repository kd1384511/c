#include<stdio.h>

/*==�v���g�^�C�v�錾===========================*/
void Get_MaxMin(int* p, int size, int* max, int* min);

/*==�G���g���|�C���g===========================*/
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },max,min;
	Get_MaxMin(data, 8, &max, &min);
	printf("�ő�l = %d\n�ŏ��l = %d\n", max, min);
}

/*==�z��̍ő�l�ƍŏ��l�����߂�====================*/
/*�������F�z��̐擪�A�h���X�@�v�f��                                               */
/*�@�@�@�@�ő�l������ϐ��@�ŏ��l������ϐ�                            */
/*=======================================*/
void Get_MaxMin(int* p, int size, int* max, int* min)
{
	*max = *p;
	*min = *p;

	for (int i = 0; i < size; i++)
	{
		if (*max < *(p + i))*max = *(p + i);
		if (*min > *(p + i))*min = *(p + i);
	}
}