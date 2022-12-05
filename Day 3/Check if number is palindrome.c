#include<stdio.h>
void main()
{
	int i,r,g,n=0;
	printf("Enter any number:\n");
	scanf("%d",&i);
	g=i;
	while(i>0)
	{
		r=i%10;
		n=n*10+r;
		i=i/10;
	}
	printf("The Reverse of the number is %d\n",n);
	if(g==n)
	{
		printf("The number is Palindrome.\n");
	}
	else
	{
		printf("The number is not Palindrome.\n");
	}
}
