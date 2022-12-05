#include<stdio.h>
struct student
{
	char name[25];
	int id,age;
	char gender;
};
void print(struct student);
void main()
{
	struct student s1;
	printf("Enter name:\n");
	scanf("%s",&s1.name);
	printf("Enter id:\n");
	scanf("%d",&s1.id);
	printf("Enter age:\n");
	scanf("%d",&s1.age);
	printf("Enter gender(M/F):\n");
	scanf(" %c",&s1.gender);
	print(s1);
}
void print(struct student x)
{
	printf("Name=%s\n",x.name);
	printf("Id=%d\n",x.id);
	printf("Age=%d\n",x.age);
	printf("Gender=%c\n",x.gender);
}
