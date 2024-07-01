#include<stdio.h>

/*==構造体=========================*/
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile person;
	printf("名前を入力：");
	scanf("%s", person.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &person.birth[0], &person.birth[1],&person.birth[2]);
	printf("%s", person.blood);
	printf("血液型を入力：");
	scanf("%s", person.blood);

	printf("%sーー%d年%d月%d日生 血液型ー %s 型\n", person.name, person.birth[0], person.birth[1], person.birth[2], person.blood);
}