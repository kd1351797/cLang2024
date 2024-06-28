#include<stdio.h>
void str_reverse(char* str1, char* str2);

main()
{
	char str1[256], str2[256];
	printf("•¶š—ñH :");
	scanf("%s", str1);
	str_reverse(str1, str2);
	printf("str1 :	%s\nstr2 : %s\n", str1, str2);
}

void str_reverse(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(str2 + j) = *(str1 + i);
	}
	*(str2 + j) = '\0';
	return;
}