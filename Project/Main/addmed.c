#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int qty;
	FILE *m1f,*m2f,*m3f,*m4f,*m5f,*m6f,*m7f,*m8f,*m9f,*m10f;
	char name[10];
	int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;
	char med[10][10]={"cipla","benedryl","vicks","corcin","volini","moov","iodex","dcoldtotal","relispray","zandubalm"};
	m1f=fopen("med1qty.txt","r+");
	m2f=fopen("med2qty.txt","r+");
	m3f=fopen("med3qty.txt","r+");
	m4f=fopen("med4qty.txt","r+");
	m5f=fopen("med5qty.txt","r+");
	m6f=fopen("med6qty.txt","r+");
	m7f=fopen("med7qty.txt","r+");
	m8f=fopen("med8qty.txt","r+");
	m9f=fopen("med9qty.txt","r+");
	m10f=fopen("med10qty.txt","r+");
	fscanf(m1f,"%d",&m1);
	fscanf(m2f,"%d",&m2);
	fscanf(m3f,"%d",&m3);
	fscanf(m4f,"%d",&m4);
	fscanf(m5f,"%d",&m5);
	fscanf(m6f,"%d",&m6);
	fscanf(m7f,"%d",&m7);
	fscanf(m8f,"%d",&m8);
	fscanf(m9f,"%d",&m9);
	fscanf(m10f,"%d",&m10);
	printf("Enter a medicine name:\n");
	scanf("%s",&name);
	if(strcmp(med[0],name)==0)
	{
		printf("Current Stock: %d\n",m1);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m1=m1+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m1);
		rewind(m1f);
		fprintf(m1f,"%d",m1);
	}
	else if(strcmp(med[1],name)==0)
	{
		printf("Current Stock: %d\n",m2);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m2=m2+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m2);
		rewind(m2f);
		fprintf(m2f,"%d",m2);
	}
	else if(strcmp(med[2],name)==0)
	{
		printf("Current Stock: %d\n",m3);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m3=m3+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m3);
		rewind(m3f);
		fprintf(m3f,"%d",m3);
	}
	else if(strcmp(med[3],name)==0)
	{
		printf("Current Stock: %d\n",m4);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m4=m4+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m4);
		rewind(m4f);
		fprintf(m4f,"%d",m4);
	}
	else if(strcmp(med[4],name)==0)
	{
		printf("Current Stock: %d\n",m5);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m5=m5+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m5);
		rewind(m5f);
		fprintf(m5f,"%d",m5);
	}
	else if(strcmp(med[5],name)==0)
	{
		printf("Current Stock: %d\n",m6);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m6=m6+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m6);
		rewind(m6f);
		fprintf(m6f,"%d",m6);
	}
	else if(strcmp(med[6],name)==0)
	{
		printf("Current Stock: %d\n",m7);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m7=m7+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m7);
		rewind(m7f);
		fprintf(m7f,"%d",m7);
	}
	else if(strcmp(med[7],name)==0)
	{
		printf("Current Stock: %d\n",m8);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m8=m8+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m8);
		rewind(m8f);
		fprintf(m8f,"%d",m8);
	}
	else if(strcmp(med[8],name)==0)
	{
		printf("Current Stock: %d\n",m9);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m9=m9+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m9);
		rewind(m9f);
		fprintf(m9f,"%d",m9);
	}
	else if(strcmp(med[9],name)==0)
	{
		printf("Current Stock: %d\n",m10);
		printf("Enter quantity:\n");
		scanf("%d",&qty);
		m10=m10+qty;
		printf("Stocks updated.\n");
		printf("Updated quantity:\n%d",m10);
		rewind(m10f);
		fprintf(m10f,"%d",m10);
	}
	fclose(m1f);
	fclose(m2f);
	fclose(m3f);
	fclose(m4f);
	fclose(m5f);
	fclose(m6f);
	fclose(m7f);
	fclose(m8f);
	fclose(m9f);
	fclose(m10f);
	return (0);
}

