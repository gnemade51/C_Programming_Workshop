#include<stdio.h>
void main()
{
	int i,r,n,g=0,a[10];
	printf("Enter any decimal number:\n");
	scanf("%d",&i);
	while(i>0)
	{
		r=i%16;
		a[g]=r;
		g=g+1;
		i=i/16;
	}
	for(n=g-1;n>=0;n--)
	{
		if(a[n]<10)
		{
			printf("%d",a[n]);
		}
		else
		{
			printf("%c",a[n]+55);
		}		
	}
}
