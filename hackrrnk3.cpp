#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,qn,i,j,a;
    scanf("%d",&n);
    char p[n][20];
    for(i=0;i<n;i++)
       scanf("%s",&p[i][0]);
     scanf("%d",&qn); int*count =(int*)calloc(qn,sizeof(int*));
    char q[qn][20];
     for(i=0;i<qn;i++)
         scanf("%s",&q[i][0]);
    
    
    for(i=0;i<qn;i++)
     {
           for(j=0;j<n;j++)
               { 
                a=strcmp(&q[i][0],&p[j][0]);
				
				if(a==0) 
                    count[i]++;
                }
        
      }
      for(i=0;i<qn;i++)
    printf("%d\n",count[i]);
    
}

