#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int N,TC,c=0,info,i,*top=NULL,*j=NULL,Max=0;
  scanf("%d",&N);
  int*stack=(int*)malloc(N*sizeof(int*));
   for(i=0;i<N;i++)
    { 
       scanf("%d ",&TC);
       switch(TC)
       {
           case 1: scanf("%d",&info);
                   stack[c]=info;
                   top=(stack+c);
                    c++;
                    break;
           case 2: top=top-1;c--; break;
           case 3: for(j=stack;j<=top;j++)
                   {  if(*j>Max) Max=*j;
                    
                      } printf("%d\n",Max);
           
           
       }
     }
 return 0;
}
