#include<stdio.h>
void main()
{
	int a,b,c,d,e,n;
	printf("Enter a three digit no.:\n");
	scanf("%d",&n);
	a=n/100;
	b=n%100;
	c=b/10;
	d=b%10;
	e=d*100+c*10+a;
	printf("After interchanging the digits: %d",e);
	getch();
}
