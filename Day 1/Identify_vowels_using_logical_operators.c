#include<stdio.h>
void main()
{
	char n;
	printf("Enter any no.:\n");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
		printf("Vowel\n");
	}
	else
	{
		printf("Consonant\n");
	}
}
