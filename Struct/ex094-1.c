#include<stdio.h>
#include<string.h>

#define NIN 5

struct day 
{
	int nen;
	int tuki;
	int hi;
};
struct profile 
{
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"yamada",2002,02,20,"AB"},
								{"tanaka",2000,12,24,"A"},
								{"sato",1992,02,14,"B"},
								{"suzuki",2010,10,12,"O"},
								{"nakai",2005,06,27,"O"}, };

	struct profile* p;

	p = data;

	int i;

	for (i = 0; i < NIN; i++, p++)
	{
		if (p->date.tuki == 02 || p->date.tuki == 2)
		{
			printf("%s - %d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^ - %sŒ^\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}

}