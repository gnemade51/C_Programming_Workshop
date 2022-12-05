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
		n=n+r*r*r;
		i=i/10;
	}
	printf("The sum of all digits is %d\n",n);
	if(n==g)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an armstrong number");
	}
}
