#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int N,q,i,info,y,x,ct1=0,size,lastans=0;
    scanf("%d %d",&N,&q);
   int*darray=(int*)malloc(q*sizeof(int*)); 
  
    for(i=0;i<q;i++)
       { scanf("%d",&info);
         darray[i]=info;
       if((darray[i]/100)==1)
           ct1++;}
        
    size=ct1;
    int *dseq=(int*)malloc(size*sizeof(int*));
    
    for(i=0;i<q;i++)
        {
        if(darray[i]/100==1){ y=darray[i]%10;
                               x=(darray[i]/10)%10;
                            dseq[(x^lastans)%N]=y;}
        else if((darray[i]/100)==2)
            { 
                 y=darray[i]%10;
                     x=(darray[i]/10)%10;
                      lastans=dseq[y%size];
                        printf("%d\n",lastans);
              }
         }
    return 0;
}

