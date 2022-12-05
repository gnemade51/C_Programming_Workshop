#include<stdio.h>
int table(int a);
void main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	table(num);
}
int table(int a)
{
	int i,c;
	printf("The table is:\n");
	for(i=1;i<=10;i++)
	{
		c=a*i;
		printf("%d*%d=%d\n",a,i,c);
	}
}
