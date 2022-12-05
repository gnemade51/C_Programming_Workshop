#include<stdio.h>
#include<string.h>
void main()
{
	char i,n[20];
	printf("Enter your name:\n");
	gets(n);
	for(i=0;i<strlen(n);i++)
	{
		printf("%c\n",n[i]);
	}
}
