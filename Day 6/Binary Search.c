#include<stdio.h>
int binary_search(char arr[10],int l,int r,int x)
{
	int mid;
	if(r>=l)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==x)
		{
			return(mid);
		}
		else if(arr[mid]>x)
		{
			return binary_search(arr,l,mid-1,x);
		}
		else
		{
			return binary_search(arr,mid+1,r,x);
		}
	}
	return(-1);
}

void main()
{
	char arr[10]={2,3,4,5,6,10,12,14,15,91};
	printf("%d\n",binary_search(arr,0,10,14));
}
