#include<stdio.h>
void main()
{
	int i,num[5];
	for(i=0;i<5;i++)
	{
		printf("Enter value:\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The values are: %d\n",num[i]);
	}
}
