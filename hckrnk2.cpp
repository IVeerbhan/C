 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n ;
int sort(int*a,int N)
 {
  int k ,i, temp;
   for(k=0;k<N-1;k++)
	{
		
		for(i=0;i<N-1-k;i++)
		{
			if(a[i]>a[i+1])
		     { temp=a[i];
		       a[i]=a[i+1];
		     	a[i+1]=temp;
		     }	
		}
		
	}

return 0;

}
int main() {

    int n ,data, k,i,c=0,f; printf("enter size and min sweetness \n");
    scanf("%d %d",&n,&k);
    int *a=(int *)malloc(n*sizeof(int*));
    printf("enter data \n");
    for(i=0;i<n;i++)
        {  scanf("%d",&data);a[i]=data; 
           printf("\n"); }
    sort(a,n);
    while(1)
      { 
          for(i=0;i<n;i++)
              { if(a[i]<k)
                  {c++;
                   a[i]=a[i]+(2*a[i+1]);
                   for(;i+1<n;i++)
                       { a[i]=a[i+1];} n--; sort(a,n);
               
                      }
         for(i=0;i<n;i++)
           { if(a[i]<k) f=0;}
            if(f==0) continue;
               else break;
               
               }
     }
    printf("%d",c);
}

