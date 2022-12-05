#include<stdio.h>
int sum1(int a,int b);
void main()
{
	int d;
	d=sum1(3,4);
	printf("%d",d);
}
int sum1(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
