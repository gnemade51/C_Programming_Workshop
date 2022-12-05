#include<stdio.h>
void main()
{
	char i,j,name[5][20];
	for(i=0;i<5;i++)
	{
		printf("Enter name:\n");
		scanf("%s",name[i]);
	}
	for(j=4;j>=0;j--)
	{
		printf("%s\n",name[j]);
	}
}
