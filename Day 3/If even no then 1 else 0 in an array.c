#include<stdio.h>
void main()
{
	int i,a[5]={2,33,66,25,33},b[5];
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			b[i]=1;
		}
		else
		{
			b[i]=0;
		}
		printf("%d\n",b[i]);
	}
}
