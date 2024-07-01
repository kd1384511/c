#include<stdio.h>
#include<string.h>

/*==ç\ë¢ëÃ=========================*/
struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile person[5] = {
		{"rina",{2000,1,1},"A"},
		{"ma",{2020,3,12},"A"},
		{"earf",{2324,11,12},"A"},
		{"brsdr",{3000,23,2},"A"},
		{"rirb",{1234,32,13},"A"},
	};

	for(int i=0;i<5;i++)
	{
			printf("%sÅ[Å[%dîN%dåé%dì˙ê∂ ååâtå^Å[ %s å^\n", person[i].name, person[i].birth.nen, person[i].birth.tuki, person[i].birth.hi, person[i].blood);
	}
}