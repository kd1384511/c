#include<stdio.h>

/*==�v���g�^�C�v�錾===================================*/
int  tbl_gokei3(int tbl[], int number);

/*==�G���g���[�|�C���g==================================*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a, 5);
	printf("gokei = %d\n", gokei);
}

/*==�z��̍��v�����߂�==================================*/
/*�z��̐擪�A�h���X�@�v�f���@���󂯎��                                                              */
/*=============================================== */
int  tbl_gokei3(int tbl[], int number)
{
	int gokei = 0;
	for (int i = 0; i < number; i++)
	{
		gokei += tbl[i];
	}

	return gokei;
}
