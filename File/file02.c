#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	int lv, hp;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("‘•”õ : %s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ : %s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ : %s\n", str);

	fscanf(fp, "%d%d%s", &lv, &hp, str);
	printf("lv : %d hp : %d ‘•”õ : %s\n", lv, hp, str);

	fclose(fp);
}