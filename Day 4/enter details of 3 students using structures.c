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
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter name:\n");
		scanf("%s",&s[i].name);
		printf("Enter id:\n");
		scanf("%d",&s[i].id);
		printf("Enter age:\n");
		scanf("%d",&s[i].age);
		printf("Enter gender(M/F):\n");
		scanf(" %c",&s[i].gender);
	}
	for(i=0;i<3;i++)
	{
		print(s[i]);
	}
}
void print(struct student x)
{
	printf("Name=%s\n",x.name);
	printf("Id=%d\n",x.id);
	printf("Age=%d\n",x.age);
	printf("Gender=%c\n",x.gender);
}
