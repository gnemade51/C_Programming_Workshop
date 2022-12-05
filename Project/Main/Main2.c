#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<addmed.h>
struct medicine
{
	char name[30];
	int quantity;
	float price;
};
int addmed(struct medicine)
{
	
}
int main()
{
	struct medicine m[10];
	int opt;
	printf("Pharmacy Management System\n\n\n");
	do
	{
		printf("Select Option:\n1. Add Medicine\n2. Check Stock & Locate Medicine\n3. Create a bill\n4. Check Customer Shopping History\n5. Exit");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter medicine name:\n");
				gets(m.name);
				print
				break;
			case 2:
			
				break;
			case 3:
				printf("Error1\n");
				break;
			case 4:
				printf("Error2\n");
				break;
			default:
				printf("Error\n");
				break;
		}
	}
	while(opt!=5);
	return 0;
}

