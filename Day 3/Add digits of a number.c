#include<stdio.h>
void main()
{
	int i,r,n=0;
	printf("Enter any number:\n");
	scanf("%d",&i);
	while(i>0)
	{
		r=i%10;
		n=n+r;
		i=i/10;
	}
	printf("The sum of all digits is %d",n);
}
