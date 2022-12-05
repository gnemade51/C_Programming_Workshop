#include<stdio.h>
void main()
{
	int i,r,n,g=0,a[10];
	printf("Enter any decimal number:\n");
	scanf("%d",&i);
	while(i>0)
	{
		r=i%2;
		a[g]=r;
		g=g+1;
		i=i/2;
	}
	for(n=g-1;n>=0;n--)
	{
		printf("%d",a[n]);
	}
}
