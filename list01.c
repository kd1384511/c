#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct NODE {
	int id;
	char name[11];
	struct NODE* pnext;
}NODE;

NODE head = { 0,"HEAD",NULL };

void show(void);
void append(int id, char* name);
void allfree(void);

main(void)
{
	printf("%d",sizeof(NODE));
}