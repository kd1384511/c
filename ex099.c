#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[] = {
		{1,"�k�C��",NULL},
		{2,"�X��",NULL},
		{3,"��茧",NULL},
		{4,"�{�錧",NULL},
		{5,"�H�c��",NULL},
		{6,"�R�`��",NULL},
		{7,"������",NULL},
		{DATA_END,"",NULL}
	};

	struct ken hyogo = { 28,"���Ɍ�",NULL };

	struct ken* p, * wp;

	//�����N�̍쐬
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	p = &hyogo;
	wp = ken_data;

	wp->next = p;
	p->next = ++wp;

	p = ken_data;
	wp->next = p+3;

	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}