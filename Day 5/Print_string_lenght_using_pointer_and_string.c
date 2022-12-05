#include<stdio.h>
#include<string.h>
int stringlength(char *str);
void main()
{
	int a;
	a=stringlenght("Hello");
	printf("%s",a);
}
int stringlength(char *str)
{
	int c=0;
	while(*str!='\0')
	{
		str++;
		c++;
	}
	return c;
}
