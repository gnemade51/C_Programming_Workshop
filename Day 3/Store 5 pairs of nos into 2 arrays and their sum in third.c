#include<stdio.h>
void main()
{
	int i,a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("Enter value for first array:\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter value for second array:\n");
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("The sum of elements of both arrays is: %d\n",c[i]);
	}
}
