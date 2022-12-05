#include<stdio.h>
void main()
{
	int n,x=347,c=1;
	while(1)
	{
		printf("Guess the number:\n");
		scanf("%d",&n);
		if(n==x)
		{
			printf("Congratlations, You guessed it right!\n");
			printf("Number of turns: %d",c);
			break;
		}
		else if(n<x)
		{
			printf("Enter a higher number\n");
			c=c+1;
		}
		else
		{
			printf("Enter a lower number\n");
			c=c+1;
			
		}
	}
}
