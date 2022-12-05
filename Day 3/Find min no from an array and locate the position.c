#include<stdio.h>
void main()
{
	int i,a[5],max=0,min,c=0;
	for(i=0;i<5;i++)
	{
		printf("Enter value for first array:\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	min=max;
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			c=i;
		}
	}
	printf("The minimum number is %d\n",min);
	printf("The location is a[%d]\n",c);
}
