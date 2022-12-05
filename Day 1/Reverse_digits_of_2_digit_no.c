#include<stdio.h>
void main()
{
	int a,b,c,n;
	printf("Enter a two digit no.:\n");
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	c=b*10+a;
	printf("After interchanging the digits: %d",c);
	getch();
}
