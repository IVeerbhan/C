#include<stdio.h>

int main()
{
	int n,i,mid,low,high,data,flag=0;
    int a[]={3,13,23,33,43,53,63,73};
    n=sizeof(a)/sizeof(int);
    low=0;
    high=n-1;
    printf("%d\n",n);
	printf("enter data to be searched\n");
	scanf("%d",&data);
      	while(low<=high)
          	{ mid=(low+high)/2;
	             if(data==a[mid])
	                  { printf("data found at %d index",mid); flag=1;break;}
	
	              else if(data>a[mid])
	                   low=mid+1;
	               else if(data<a[mid])
	                    high=mid-1;
             } 
	
    if(flag==0)
      printf("\ndata not found \n");
	return 0;
}
































