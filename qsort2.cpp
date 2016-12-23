#include <stdio.h>
#include<stdlib.h>
int partition(int *a,int start,int end)
{ 
    int i,pivot,pi,temp;
    
    pivot=a[end];
    pi=start;
    for(i=start;i<end;i++)
    {
        if(a[i]<pivot)
        {
            temp=a[i];
            a[i]=a[pi];
            a[pi]=temp;
            pi=pi+1;
            
        }
        
    }
    temp=a[pi];
	a[pi]=a[end];
	a[end]=a[pi];
   return pi;
   
}
void quicksort(int *a,int start,int end)
{
    if(start<end)
   {
     int pi=partition(a,start,end);
    quicksort(a,start,pi-1);
    quicksort(a,pi+1,end);
   }
}
int main()
{
    int a[ ]={7,6,5,4,3,2,1,0};
    quicksort(a,0,7);
    for(int i=0;i<8;i++)
    {
        printf("%d\t",a[i]);
    }
    
}
