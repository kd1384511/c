#include<stdio.h>

/*==�\����=========================*/
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile person;
	printf("���O����́F");
	scanf("%s", person.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &person.birth[0], &person.birth[1],&person.birth[2]);
	printf("%s", person.blood);
	printf("���t�^����́F");
	scanf("%s", person.blood);

	printf("%s�[�[%d�N%d��%d���� ���t�^�[ %s �^\n", person.name, person.birth[0], person.birth[1], person.birth[2], person.blood);
}