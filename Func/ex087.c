#include<stdio.h>
#include<stdlib.h>

main(int argc,char* argv[])
{
	int data1, data2, ans;
	data1 = atoi(argv[1]);
	data2 = atoi(argv[2]);
	ans = data1 + data2;

	printf("%d + %d = %d\n", data1, data2, ans);
}