#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0,t,k,d; 
    scanf("%d",&t); int c[t];
    for( a0 = 0; a0 < t; a0++)
    {   c[a0]=0;
        int n; 
        scanf("%d",&n);
        k=n;
        while(k>0)
            {d=k%10;
              if(n%d==0) c[a0]++;
               k=k/10;
             } 

    }  
     for( a0 = 0; a0 < t; a0++)
         printf("%d\n",c[a0]);
    return 0;
}
