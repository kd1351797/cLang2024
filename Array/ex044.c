#include<stdio.h>
main()
{
	char moji1[40], moji2[40],w[40];
	int i;

	printf("文字列１を入力 :");
	scanf("%s", &moji1[0]);
	printf("文字列２を入力 :");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);

	printf("入れ替えると\n");

	//moji1の配列要素をwにコピーする
	i = 0;
	while (moji1[i] != '\0')
	{
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';

	//moji2の配列要素をmoji1にコピーする
	i = 0;
	while (moji2[i] != '\0')
	{
		moji1[i] = moji2[i];
		i++;
	}
	moji1[i] = '\0';

	//wの配列要素をmoji2にコピーする
	i = 0;
	while (w[i] != '\0')
	{
		moji2[i] = w[i];
		i++;
	}
	moji2[i] = '\0';

	printf("moji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);
}