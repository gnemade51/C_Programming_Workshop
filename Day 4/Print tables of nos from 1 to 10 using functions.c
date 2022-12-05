#include<stdio.h>
int table(int a);
void main()
{
	int j;
	for(j=1;j<=10;j++)
	{
		printf("The table of %d is:\n",j);
		table(j);
	}
}
int table(int a)
{
	int i,c;
	for(i=1;i<=10;i++)
	{
		c=a*i;
		printf("%d*%d=%d\n",a,i,c);
	}
}
