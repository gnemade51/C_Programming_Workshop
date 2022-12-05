#include <stdio.h>
int main()
{
   int arr[10]={'2','1','40','5','78','63','422','132','8','654'};
   int c,d,pos,temp; 
   for(c=0;c<10;c++)
   {
      pos=c;
      for(d=c+1;d<10;d++)
      {
      	if(arr[pos]<arr[d])
        {
        	pos=d;
		}
	  }
	}
      if(pos!=d)
      {
         temp=arr[c];
         arr[c]=arr[pos];
         arr[pos]=temp;
      }
   }
   printf("Sorted list in ascending order:\n"); 
   for(c=0;c<10;c++)
   {
   	printf("%d\n",arr[c]);
   }
   return 0;
}
