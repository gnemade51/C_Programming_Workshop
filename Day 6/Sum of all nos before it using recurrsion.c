#include<stdio.h>
int sum(int a);
int sum(int a)
{
	if(a==1)
	{
		return(1);
	}
	else
	{
		return a+sum(a-1);
	}
}
void main()
{
	int i;
	printf("Enter a number:\n");
	scanf("%d",&i);
	printf("%d",sum(i));
}
