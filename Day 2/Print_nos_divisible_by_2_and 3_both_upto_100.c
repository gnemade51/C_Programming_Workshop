#include<stdio.h>
void main()
{
	int i;
	while(i<=100)
	{
		if(i%2==0&&i%3==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
	
}
