#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char TC[1000];
    int N,len,i,j,k;
    scanf("%d",&N); printf("\n"); int *rec=(int*)calloc(N,sizeof(int*));
    for(i=0;i<N;i++)
     { 
        scanf("%s",TC);
        len=strlen(TC); 
          for(j=0,k=len-1;j<(len/2),k>=(len/2);j++,k--)
               { 
                 if(TC[j]!=TC[k])
                    {  rec[i]=1;
					   break;}
               }
        
    }
 for(i=0;i<N;i++)
     {
       if(rec[i]==1)
           printf("NO\n");
     else 
         printf("YES\n");
     }
    return 0;
} 
