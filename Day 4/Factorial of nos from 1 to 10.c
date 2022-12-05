#include<stdio.h>
int factorial(int a);
void main()
{
	int j;
	for(j=1;j<=10;j++)
	{
		printf("The factorial of %d is:\n",j);
		factorial(j);
	}
}
int factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d\n",f);
	return(f);
}
