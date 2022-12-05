#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	int n,i,c=0;
	f1=fopen("data1.txt","r");
	f2=fopen("data2.txt","w");
	if(f1!=NULL)
	{
		printf("////file opened successfully////\n");
	}
	else
	{
		printf("////file can not be opened////\n");
	}
	printf("\nFile1:\n");
	while(n!=EOF)
	{
		n=fgetc(f1);
		printf("%c",n);
		if(n!='f')
		{
			fputc(n,f2);
		}
	}
	printf("%c",n);
	fclose(f1);
	fclose(f2);
	f2=fopen("data2.txt","r");
	printf("\nFile2:\n");
	while(i!=EOF)
	{
		i=fgetc(f1);
		printf("%c",i);
	}
	fclose(f2);
}
