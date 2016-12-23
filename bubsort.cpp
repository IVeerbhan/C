#include<stdio.h>


int main()
{
   	int n,i,k,temp;
	printf("enter size\n",n);
    scanf("%d",&n); 
    int a[n];
	printf("enter data\n");
    	for(i=0;i<n;i++)
    	  scanf("%d",&a[i]);
    for(k=0;k<n-1;k++)
	{
		
		for(i=0;i<n-1-k;i++)
		{
			if(a[i]>a[i+1])
		     { temp=a[i];
		       a[i]=a[i+1];
		     	a[i+1]=temp;
		     }	
		}
		
	}
		
	printf("sorted data is\n");
    	for(i=0;i<n;i++)
    	  printf("%d \n",a[i]);	
}
