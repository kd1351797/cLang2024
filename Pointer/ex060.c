#include<stdio.h>
main()
{
	char data[] = { "Language" };
	char *p_data,s;
	int i;

	p_data = data;

	printf("data[] = %s\n", data);
	printf("検索文字は？");
	scanf("%c", &s);
	printf("検索結果は");
	i = 0;
	while (*(p_data + i))
	{
		if (s == *(p_data + i))
		{
			printf("%d ", i + 1);
		}
		i++;
	}
	printf("文字目です\n");


}