#include<stdio.h>
void main()
{
	char i,f=0;
	char name[5][20]={"gaurav","mihir","aaditya","sru","rucha"};
	char pswd[5][20]={"7599","8990","5622","5699","1213"};
	char usrname[20],usrpswd[10];
	printf("Enter Username:\n");
	gets(usrname);
	for(i=0;i<5;i++)
	{
		if(strcmp(usrname,name[i])==0)
		{
			printf("Enter Password:\n");
			gets(usrpswd);
			if(strcmp(usrpswd,pswd[i])==0)
			{
				printf("Access Granted.\n");
				f=1;
				break;
			}
			else
			{
				printf("Access Denied.\n");
				f=1;
			}
		}
	}
	if(f==0)
	{
		printf("Invalid Username.\n");
	}
}
