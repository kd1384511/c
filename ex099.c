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
		{1,"–kŠC“¹",NULL},
		{2,"ÂXŒ§",NULL},
		{3,"ŠâŽèŒ§",NULL},
		{4,"‹{éŒ§",NULL},
		{5,"H“cŒ",NULL},
		{6,"ŽRŒ`Œ§",NULL},
		{7,"•Ÿ“‡Œ§",NULL},
		{DATA_END,"",NULL}
	};

	struct ken hyogo = { 28,"•ºŒÉŒ§",NULL };

	struct ken* p, * wp;

	//ƒŠƒ“ƒN‚Ìì¬
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

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}