#include<stdio.h>

/*==�L���萔�@�z��̗v�f��======================*/
#define TBL_END 5

/*==�v���g�^�C�v�錾==========================*/
int tbl_gokei4(int* p);

/*==�G���g���[�|�C���g=========================*/
main()
{
	int a[] = { 10,20,30,40,50 };
	int gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);
}

/*==���v�����߂�=============================*/
/*�������F�z��̐擪�A�h���X                                                           */
/*=======================================*/
int tbl_gokei4(int* p)
{
	int gokei = 0;
	for (int i = 0; i < TBL_END; i++)
	{
		gokei += *(p + i);
	}
	return gokei;
}