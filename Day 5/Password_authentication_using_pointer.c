#include<stdio.h>
#include<string.h>
char* auth(char *p)
{
	if(strcmp (p,"ABCD123")==0)
	{
		return("GRANTED");
	}
	else
	{
		return("DENIED");
	}
}
void main()
{
	char a[10];
	char *d;
	printf("Enter Password:\n");
	scanf("%s",&a);
	d=auth(a);
	printf("%s",d);
}
