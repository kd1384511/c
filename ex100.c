#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*==構造体COL============================================*/
typedef struct {
	int no;
	char name[11];
	struct COL* pnext;
}COL;

/*==先頭リスト============================================*/
COL head = { 0,"head",NULL };

/*==プロトタイプ宣言========================================*/
void call(int no);
void show();
void add();
void insert();
void del();
void all_free();

/*==エントリポイント========================================*/
main()
{
	int no;

	do {

		//メニュー表示
		printf("===================\n");
		printf("|１：表示         |\n");
		printf("|２：追加         |\n");
		printf("|３：挿入         |\n");
		printf("|４：削除         |\n");
		printf("|９：終了         |\n");
		printf("===================\n");
		printf(">>");
		scanf("%d", &no);
		printf("\n");

		//system("cls");

		//関数呼び出し
		call(no);

		printf("\n");
	} while (no != 9);
}

/*==関数呼び出し==========================================*/
void call(int no)
{
	if (no == 1)show();
	if (no == 2)add();
	if (no == 3)insert();
	if (no == 4)del();
	if (no == 9)all_free();
}

/*==リストの表示==========================================*/
void show()
{
	COL* p1=&head;

	p1 = p1->pnext;

	//p1に代入されたアドレスがNULLになるまで表示
	printf("==リストの表示=====\n");
	while (p1 != NULL)
	{
		printf("%d：%s\n", p1->no, p1->name);
		p1 = p1->pnext;
	}
	printf("===================\n");
}

/*==リストの追加==========================================*/
void add()
{
	COL* pnew = (COL*)malloc(sizeof(COL));
	int no;
	char name[11];

	//追加する要素を入力
	printf("==リストの追加=====\n");
	printf("no    >> ");
	scanf("%d", &no);
	printf("color >> ");
	scanf("%s", name);
	printf("===================\n");

	//追加する要素の設定
	pnew->no = no;
	strcpy(pnew->name, name);
	pnew->pnext = NULL;

	//リストの最後尾を探索して要素を追加
	COL* p1 = &head;
	while (p1->pnext != NULL) {
		p1 = p1->pnext;
	}
	p1->pnext = pnew;

}

/*==指定したナンバーの場所に挿入===============================*/
void insert()
{
	show();

	COL* pnew = (COL*)malloc(sizeof(COL));
	int no,ino;
	char name[11];

	//追加する要素を入力
	printf("==リストの追加=====\n");
	printf("no    >> ");
	scanf("%d", &no);
	printf("color >> ");
	scanf("%s", name);
	printf("===================\n");

	//追加する要素の設定
	pnew->no = no;
	strcpy(pnew->name, name);
	
	printf("要素番号の指定（指定した番号の場所に挿入されます）\n");
	printf(">>");
	scanf("%d", &ino);

	COL* p1 = &head;
	COL* p2;
	while (p1->no != ino)
	{
		if (p1 == NULL)
		{
			printf("失敗しました\n");
			return;
		}
		p2 = p1;
		p1 = p1->pnext;
	}

	p2->pnext = pnew;
	pnew->pnext = p1;

}

/*==指定したナンバーの要素を削除================================*/
void del()
{
	COL* p1 = &head,*p2=&head;
	int no;

	show();

	/*入力*/
	printf("削除するナンバーを入力してください...");
	scanf("%d", &no);

	//削除する要素の探索
	//while (p1->no != no)
	//{
	//	p1 = p1->pnext;
	//	if (p1 == NULL)
	//	{
	//		printf("要素が見つかりませんでした\n");
	//		return;
	//	}
	//}

	////その要素の１つ前の要素を探索
	//while (p2->pnext != p1)
	//{
	//	p2 = p2->pnext;
	//}

	while (p1->no != no)
	{
		if (p1 == NULL)
		{
			printf("失敗しました\n");
			return;
		}
		p2 = p1;
		p1 = (COL*)p1->pnext;
	}


	//１つ前の要素のpnextに削除する要素のpnextを代入
	p2->pnext = p1->pnext;

	free(p1);//確認部分
}

/*==終了時に全ての要素を削除===================================*/
void all_free()
{
	COL* p = head.pnext, * pw;
	do{
		pw = (COL*)p->pnext;
		
		free(p);//確認部分
		p = pw;
		printf("0\n");
	} while (p != NULL);

}