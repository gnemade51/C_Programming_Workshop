#include<stdio.h>
void main()
{
	int i=0;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("%d is even number\n",i);
		}
		else
		{
			printf("%d is odd number\n",i);
		}
		i=i+1;
	}
}
