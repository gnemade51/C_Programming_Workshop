#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n<10)
	{
		printf("It is single digit number\n");
	
	}
	else if(n<100)
	{
		printf("It is two digit number\n");
	
	}
	else if(n<1000)
	{
		printf("It 3 digit\n");
	}
}

