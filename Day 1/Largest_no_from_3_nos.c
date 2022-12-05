#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three Nos.:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("A is the lagest\n");
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("B is largest\n");
		}
	}
	if (c>a)
	{
		if(c>b)
		{
			printf("C is largest\n");
		}
	}
}
