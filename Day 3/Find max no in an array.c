#include<stdio.h>
void main()
{
	int i,a[5],max=0;
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
	printf("The maximum number is %d",max);
}
