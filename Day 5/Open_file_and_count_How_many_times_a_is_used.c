#include<stdio.h>
void main()
{
	FILE *f;
	int n,c=0;
	f=fopen("Password_authentication_using_pointer.c","r");
	if(f!=NULL)
	{
		printf("////file opened successfully////\n");
	}
	else
	{
		printf("////file can not be opened////\n");
	}
	while(n!=EOF)
	{
		n=fgetc(f);
		printf("%c",n);
		if(n=='a')
		{
			c++;
		}
	}
	printf("no. of 'a' char=%d\n",c);
	fclose(f);
}
