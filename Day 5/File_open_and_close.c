#include<stdio.h>
void main()
{
	FILE *f;
	int n;
	f=fopen("data1.txt","r");
	if(f!=NULL)
	{
		printf("file opened successfully\n");
	}
	else
	{
		printf("file can not be opened\n");
	}
	n=fclose(f);
	if(n==0)
	{
		printf("file closed successfully\n");
		
	}
}
