#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*==�\����COL============================================*/
typedef struct {
	int no;
	char name[11];
	struct COL* pnext;
}COL;

/*==�擪���X�g============================================*/
COL head = { 0,"head",NULL };

/*==�v���g�^�C�v�錾========================================*/
void call(int no);
void show();
void add();
void insert();
void del();
void all_free();

/*==�G���g���|�C���g========================================*/
main()
{
	int no;

	do {

		//���j���[�\��
		printf("===================\n");
		printf("|�P�F�\��         |\n");
		printf("|�Q�F�ǉ�         |\n");
		printf("|�R�F�}��         |\n");
		printf("|�S�F�폜         |\n");
		printf("|�X�F�I��         |\n");
		printf("===================\n");
		printf(">>");
		scanf("%d", &no);
		printf("\n");

		//system("cls");

		//�֐��Ăяo��
		call(no);

		printf("\n");
	} while (no != 9);
}

/*==�֐��Ăяo��==========================================*/
void call(int no)
{
	if (no == 1)show();
	if (no == 2)add();
	if (no == 3)insert();
	if (no == 4)del();
	if (no == 9)all_free();
}

/*==���X�g�̕\��==========================================*/
void show()
{
	COL* p1=&head;

	p1 = p1->pnext;

	//p1�ɑ�����ꂽ�A�h���X��NULL�ɂȂ�܂ŕ\��
	printf("==���X�g�̕\��=====\n");
	while (p1 != NULL)
	{
		printf("%d�F%s\n", p1->no, p1->name);
		p1 = p1->pnext;
	}
	printf("===================\n");
}

/*==���X�g�̒ǉ�==========================================*/
void add()
{
	COL* pnew = (COL*)malloc(sizeof(COL));
	int no;
	char name[11];

	//�ǉ�����v�f�����
	printf("==���X�g�̒ǉ�=====\n");
	printf("no    >> ");
	scanf("%d", &no);
	printf("color >> ");
	scanf("%s", name);
	printf("===================\n");

	//�ǉ�����v�f�̐ݒ�
	pnew->no = no;
	strcpy(pnew->name, name);
	pnew->pnext = NULL;

	//���X�g�̍Ō����T�����ėv�f��ǉ�
	COL* p1 = &head;
	while (p1->pnext != NULL) {
		p1 = p1->pnext;
	}
	p1->pnext = pnew;

}

/*==�w�肵���i���o�[�̏ꏊ�ɑ}��===============================*/
void insert()
{
	show();

	COL* pnew = (COL*)malloc(sizeof(COL));
	int no,ino;
	char name[11];

	//�ǉ�����v�f�����
	printf("==���X�g�̒ǉ�=====\n");
	printf("no    >> ");
	scanf("%d", &no);
	printf("color >> ");
	scanf("%s", name);
	printf("===================\n");

	//�ǉ�����v�f�̐ݒ�
	pnew->no = no;
	strcpy(pnew->name, name);
	
	printf("�v�f�ԍ��̎w��i�w�肵���ԍ��̏ꏊ�ɑ}������܂��j\n");
	printf(">>");
	scanf("%d", &ino);

	COL* p1 = &head;
	COL* p2;
	while (p1->no != ino)
	{
		if (p1 == NULL)
		{
			printf("���s���܂���\n");
			return;
		}
		p2 = p1;
		p1 = p1->pnext;
	}

	p2->pnext = pnew;
	pnew->pnext = p1;

}

/*==�w�肵���i���o�[�̗v�f���폜================================*/
void del()
{
	COL* p1 = &head,*p2=&head;
	int no;

	show();

	/*����*/
	printf("�폜����i���o�[����͂��Ă�������...");
	scanf("%d", &no);

	//�폜����v�f�̒T��
	//while (p1->no != no)
	//{
	//	p1 = p1->pnext;
	//	if (p1 == NULL)
	//	{
	//		printf("�v�f��������܂���ł���\n");
	//		return;
	//	}
	//}

	////���̗v�f�̂P�O�̗v�f��T��
	//while (p2->pnext != p1)
	//{
	//	p2 = p2->pnext;
	//}

	while (p1->no != no)
	{
		if (p1 == NULL)
		{
			printf("���s���܂���\n");
			return;
		}
		p2 = p1;
		p1 = (COL*)p1->pnext;
	}


	//�P�O�̗v�f��pnext�ɍ폜����v�f��pnext����
	p2->pnext = p1->pnext;

	free(p1);//�m�F����
}

/*==�I�����ɑS�Ă̗v�f���폜===================================*/
void all_free()
{
	COL* p = head.pnext, * pw;
	do{
		pw = (COL*)p->pnext;
		
		free(p);//�m�F����
		p = pw;
		printf("0\n");
	} while (p != NULL);

}