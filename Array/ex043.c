#include<stdio.h>
//#include<string.h>
main()
{
	char str[] = "orange";
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	printf("•¶š—ñ : %s\n", str);
	printf("•¶š”‚Í%d•¶š\n", i);
	//printf("•¶š”‚Í%d•¶š\n", strlen(str));
}