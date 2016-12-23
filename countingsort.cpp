#include<stdio.h>
#include<malloc.h>
void countingsort(int input[],int size)
{ 
   int max,min,pos,i;
  for( i=0;i<size;i++)//calculating min and max values
  {
  	if(input[i]>max) max=input[i];
  	else if(input[i]<min) min=input[i];
  }
    int j=min;
	int const s=(max-min)+1; // size ofindex, count and  sum count arrays	
	
	 int *count=(int *)malloc(s*sizeof(int*));
	  int *index=(int *)malloc(s*sizeof(int*));
	   int *sumcount=(int *)malloc(s*sizeof(int*));
      	for(i=0;i<s,j<=max;i++,j++)
         {
         	count[i]=0;
         	index[i]=j;
        
	     }
	    for( i=0;i<size;i++)
	    { count[input[i]-min]++;}//filing the count array
	sumcount[0]=count[0];
	    for(i=1;i<s;i++)//fillng sumcount array
	      { sumcount[i]=sumcount[i-1]+count[i];}
	   int *sorted=(int *)malloc(size*sizeof(int*));
	   for(i=0;i<size;i++)//filling the sorted array
	   {
	      	pos=sumcount[input[i]-min];
		   sorted[pos-1]=input[i];
		   sumcount[input[i]-min]--;
	   }  
	   for(i=0;i<size;i++) printf("%d  ",sorted[i]);  
	   
	 
}
int main()
{
	
	
	int input[]={10,7,12,4,9,13};
	int size=sizeof(input)/sizeof(int);
	countingsort(input,size);
	return 0;
}
