#include<stdio.h>
#include<conio.h>
#include"malloc.h"
struct node
{ int data;
  node *link; 
};
void add(node **f,node **r);
void del(node **f,node **r);
int main()
{
	node * front,* rear;
	
	front=rear=NULL;
	add(&front,&rear);
	add(&front,&rear);
	add(&front,&rear);
	add(&front,&rear);
	del(&front,&rear);
	del(&front,&rear);
	return 0;
}
void add(node **f,node **r)
{ int info;
  node*q;
  q=(struct node*)malloc(sizeof(struct node));
  printf("enter data \n");scanf("%d",&info);
  q->link=NULL;
  q->data=info;
  if(*f==NULL)
  *f=q;
  else
  (*r)->link=q;
   *r=q;
  
}
void del(node **f,node **r)
{  printf("data removed is %d \n",(*f)->data);
   (*f)=(*f)->link;
}
