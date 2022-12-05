#include<stdio.h>
void main()
{
	FILE *f;
	int n=9;
	char abc[30];
	f=fopen("Password_authentication_using_pointer.c","r");
	if(f!=NULL)
	{
		printf("////file opened successfully////\n");
	}
	else
	{
		printf("////file can not be opened////\n");
	}
	while(n>0)
	{
		//n=fgets(abc,10,f);
		n=fscanf(f,"%s",abc);
		printf("%s\n",abc);
	}
	fclose(f);
}
