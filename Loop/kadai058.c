#include<stdio.h>
main()
{
	char moji;
	int i, j;

	moji = 0x20;

	for (i = 0; i <(126-32) /9  ; i++)
	{
		for (j = 0; j < 10; j++,moji++)
		{
			printf("%x %c ", moji, moji);
			
			if (moji == 0x7E)break;
		}
		printf("\n");
	}
}