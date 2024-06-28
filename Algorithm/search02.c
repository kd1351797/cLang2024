#include<stdio.h>
main()
{
	int i, s;
	int d[] = {10,5,30,77,16,3,47,29,37,33,0};

	printf("’Tõ’l‚ğ“ü—Í :");
	scanf("%d", &s);

	for (d[10] = s, i = 0; d[i] != s; i++);

	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("’Tõ’l%d‚Íd[%d]‚Å”­Œ©\n", s, i);
	}
}