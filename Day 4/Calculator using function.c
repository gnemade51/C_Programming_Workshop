#include<stdio.h>
int calc(int a,int b,char c);
void main()
{
	int p,q;
	char r;
	printf("Enter first no.:\n");
	scanf("%d",&p);
	printf("Enter second no.:\n");
	scanf("%d",&q);
	printf("Enter operation(+,-,*,/):\n");
	scanf("%c",&r);
	printf("%d\n",calc(p,q,r));
}
int calc(int a,int b,char c)
{
	if(c=='+')
	{
		return(a+b);
	}
	else if(c=='-')
	{
		return(a-b);
	}
	else if(c=='*')
	{
		return(a*b);
	}
	else if(c=='/')
	{
		return(a/b);
	}
}
