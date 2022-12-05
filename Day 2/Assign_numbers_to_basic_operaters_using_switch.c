#include<stdio.h>
void main()
{
	char n;
	printf("Enter operation from 1-4\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Addition\n");
			break;
		case 2:
			printf("Subtration\n");
			break;
		case 3:
			printf("Multiplication\n");
			break;
		case 4:
			printf("Division\n");
			break;
		default:
			printf("Invalid Choice\n");
	}
}
