#include<stdio.h>
main()
{
	char data[] = { "Language" };
	char *p_data,s;
	int i;

	p_data = data;

	printf("data[] = %s\n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚Í");
	i = 0;
	while (*(p_data + i))
	{
		if (s == *(p_data + i))
		{
			printf("%d ", i + 1);
		}
		i++;
	}
	printf("•¶š–Ú‚Å‚·\n");


}