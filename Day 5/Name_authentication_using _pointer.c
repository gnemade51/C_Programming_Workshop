#include<stdio.h>
#include<string.h>
char* auth(char *p)
{
	int i;
	char b[5][10]={"Gaurav","Sru","Mihir","Aaditya","Sandy"};
	for(i=0;i<5;i++)
	{
		if(strcmp(p,b[i])==0)
		{
			return("GRANTED");
		}
	}
	return("DENIED");
}
void main()
{
	char a[10];
	char *d;
	printf("Enter Name:\n");
	scanf("%s",a);
	d=auth(a);
	printf("%s",d);
}
