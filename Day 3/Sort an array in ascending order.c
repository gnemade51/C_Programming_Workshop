#include<stdio.h>
void main()
{
	int i,j,temp,a[5]={32,41,20,15,4};
	for(j=0;j<5;j++)
	{
		for(i=0;i<4;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("The Ascending order is:\n");
	for(j=0;j<5;j++)
	{
		printf("%d\n",a[j]);
	}
}
