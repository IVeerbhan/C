#include"malloc.h"
#include<stdio.h>
struct data
{ int num; char *name;
};
data *thearray=NULL;
int add(int *top,int *ne)
{
	data item; *ne++;*top++;
	void *tmp=realloc(thearray,(1*sizeof(data)));
	thearray=(data*)tmp;
	printf("enter name and number \n");
	scanf("%s %d",&(item.name),&(item.num));
	thearray[*ne]=item;
}
display(int *ne)
{
	for(int i=0;i<*ne;i++)
	
	{ data item;
	  item=thearray[i];
	  printf("%s  %d",item.name,item.num); 
	}
	
	
}
int main()
{ int top,ne;
  top-1;ne=0;
  add(&top,&ne);
  add(&top,&ne);
  display(&ne);
	return 0;
	
}
