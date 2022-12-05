#include<stdio.h>
void main()
{
	int n,i,f;
	printf("Enter any number:\n");
	scanf("%d",n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		if(f==0)
		{
			printf("It is a prime number\n");
		}
		else
		{
			printf("It is not a Prime number\n");
		}
	}
}	
