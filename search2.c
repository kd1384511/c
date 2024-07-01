#include<stdio.h>

main()
{
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int num,i=0;


	printf("’Tõ’l‚“‚ð“ü—ÍF");
	scanf("%d", &num);

	data[10] = num;


	while (data[i] != data[10])
		i++;


	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("data[%d]‚ÅŒ©‚Â‚©‚è‚Ü‚µ‚½\n", i);
	}
}