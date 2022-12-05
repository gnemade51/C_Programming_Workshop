#include<stdio.h>
void main()
{
	int a,b,o;
	printf("Enter first no.:\n");
	scanf("%d",&a);
	printf("Enter second no.:\n");
	scanf("%d",&b);
	printf("Choose operation(1=+;2=-;3=*;4=/):\n");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
			printf("Addition of a & b is %d",a+b);
			break;
		case 2:
			printf("Subtraction of a & b is %d",a-b);
			break;
		case 3:
			printf("Multiplication of a & b is %d",a*b);
			break;
		case 4:
			printf("Division of a & b is %d",a/b);
			break;
		default:
			
			printf("Invalid choice!");
			
	}
}
