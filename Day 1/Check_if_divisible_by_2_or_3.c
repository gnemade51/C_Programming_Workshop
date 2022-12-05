#include<stdio.h>
void main()
{
	int n;
	printf("Enter a no.:\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		if(n%3==0)
		{
			printf("It is divisible by both\n");
		}
		else
		{
			printf("It is divisible by 2\n");
		}
	}
	else if(n%3==0)
	{
		printf("It is divisible by 3\n");
	}
	else
	{
		printf("It is not divisible\n");
	}
}
