#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter frist number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:\n");
	printf("The first number:%d\n",a);
	printf("The second number:%d\n",b);
}
