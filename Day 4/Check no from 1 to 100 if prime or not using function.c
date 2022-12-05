#include<stdio.h>
int isprime(int a);
void main()
{
	int d,j;
	for(j=1;j<=100;j++)
	{
		d=isprime(j);
		printf("%d=%d\n",j,d);
	}
}
int isprime(int a)
{
	int i,f=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return(0);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		return(1);
	}
}
