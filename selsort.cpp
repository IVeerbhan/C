#include<stdio.h> 
	
int main()	
{
	int n,i,k,temp,imin;
	printf("enter size\n",n);
    scanf("%d",&n); int a[n];
    
    printf("enter data\n");
    	for(i=0;i<n;i++)
    	  scanf("%d",&a[i]);
      for(k=0;k<n-1;k++)
    {
    	imin=k;
     for(i=k+1;i<n;i++)
     {
     	if(a[i]<a[imin])
     	 imin=i;
     }
     temp=a[k];
	 a[k]=a[imin];
	 a[imin]=temp;	
    }
    		printf("sorted data is\n");
    	for(i=0;i<n;i++)
    	  printf("%d \n",a[i]);	
    	
}
    
    
    
