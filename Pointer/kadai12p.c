#include<stdio.h>
main()
{
	char* day[] = { "Sunday",
					"Monday",
					"Tuesday",
					"Wednesday",
					"Thursday",
					"Friday",
					"Saturday",
					NULL };
	char** p;

	for (p = day; **p != NULL; *p++)
	{
		printf("%s\n", *p);
	}
}