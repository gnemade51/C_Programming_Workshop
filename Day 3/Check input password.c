#include<stdio.h>
void main()
{
	char i,n[20],p[20]="shengdana";
	for(i=0;i<3;i++)
	{
		printf("Enter password:\n");
		gets(n);
		if(strcmp(n,p)==0)
		{
			printf("Access granted.\n");
			break;
		}
		else
		{
			printf("Access deined, try again:\n");
		}
	}
	if(strcmp(n,p)==0)
	{
		printf("Congrats");
	}
	else
	{
		printf("Access blocked.\n");
	}
}
