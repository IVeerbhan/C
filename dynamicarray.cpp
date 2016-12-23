#include<stdio.h>
#include<stdlib.h>
int getdata();
int main()
{
	int *data,*temp;
	int info,ne;
	data=(int*)malloc(sizeof(int));
	
	for(ne=0;;ne++)
	{   
		info=getdata();
		if( info!=NULL)
	  {
	  
		data[ne]=info;
		temp=(int*)realloc(data,(ne+2)*sizeof(int));
		if(temp!=NULL)
		{ data=temp;
		}
		else if(temp==NULL)
		{ printf("allocation failed");
		  free(data);
		  return 1;
		}  }
	else if (info==NULL) 
	break;	}
	int i;
	
	for(i=0;i<=ne;i++)
	   {printf("%d \n",data[i]);
		  }	
	 free(data);
	 return 0;
		
	}
	
	int getdata()
	{ int num;char ch;
	  printf("want to enter data Y/N \n");
	  scanf("%c",&ch);
	  if(ch=='Y')
	 {
	   printf("enter data \n");
	  scanf("%d",&num); return(num);}
	  else 
	   return(NULL);
		
		
	}
	

