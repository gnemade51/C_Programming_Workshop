#include<stdio.h>
void main()
{
	char i,a[]={'R','O','H','I','T'},b[]={'C','C','C','C','C'};
	for(i=0;i<5;i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			b[i]='V';
		}
		printf("%c",b[i]);
	}
}
