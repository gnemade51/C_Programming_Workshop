#include<stdio.h>
void main()
{
	int i,s=0,num[5];
	for(i=0;i<5;i++)
	{
		printf("Enter value:\n");
		scanf("%d",&num[i]);
		s=s+num[i];
	}
	for(i=0;i<5;i++)
	{
		printf("The values are: %d\n",num[i]);
	}
	printf("The sum of all numbers is: %d\n",s);
}
