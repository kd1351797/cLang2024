#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	int i;

	printf("”z—ñ save[] =");
	for (i = 0; p[i] != '\0'; i++)
	{
		save[i] = p[i];
		printf("%c", save[i]);
	}

	save[i] = '\0';

	//for (; *p != '\0'; p++)
	//{
	//	printf("%c", *p);
	//}
}