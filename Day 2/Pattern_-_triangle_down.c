#include<stdio.h>
int main()
{
	char i,j,k;
	for(i=4;i>=0;i--)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
