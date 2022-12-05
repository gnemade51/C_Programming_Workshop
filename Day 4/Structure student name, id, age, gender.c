#include<stdio.h>
struct student
{
	char name[25];
	int id,age;
	char gender;
};
void main()
{
	struct student s1,s2;
	printf("Enter name:\n");
	scanf("%s",&s1.name);
	printf("Enter id:\n");
	scanf("%d",&s1.id);
	printf("Enter age:\n");
	scanf("%d",&s1.age);
	printf("Enter gender(M/F):\n");
	scanf(" %c",&s1.gender);
	printf("Name=%s\n",s1.name);
	printf("Id=%d\n",s1.id);
	printf("Age=%d\n",s1.age);
	printf("Gender=%c\n",s1.gender);
	
	printf("Enter name:\n");
	scanf("%s",&s2.name);
	printf("Enter id:\n");
	scanf("%d",&s2.id);
	printf("Enter age:\n");
	scanf("%d",&s2.age);
	printf("Enter gender(M/F):\n");
	scanf(" %c",&s2.gender);
	printf("Name=%s\n",s2.name);
	printf("Id=%d\n",s2.id);
	printf("Age=%d\n",s2.age);
	printf("Gender=%c\n",s2.gender);
}
