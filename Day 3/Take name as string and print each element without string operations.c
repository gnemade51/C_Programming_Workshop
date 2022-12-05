#include<stdio.h>
void main()
{
	char i,n[20];
	printf("Enter your name:\n");
	gets(n);
	while(i<'\0')
	{
		printf("%c\n",n[i]);
	}
}
