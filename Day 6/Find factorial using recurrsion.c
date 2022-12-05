#include<stdio.h>
int fact(int a);
int fact(int a)
{
	if(a==1)
	{
		return(1);
	}
	else
	{
		return a*fact(a-1);
	}
}
void main()
{
	int i;
	printf("Enter a number:\n");
	scanf("%d",&i);
	printf("%d",fact(i));
}
