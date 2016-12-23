#include<stdio.h> //use malloc
#include<conio.h>
# define size 10
void insert(int lq[],int &front,int &rear);
void del(int lq[],int &front,int &rear);
int main()
{  int queue[size];
   int f ,r ;
   f=r=-1;
   insert(queue,f,r);
   insert(queue,f,r);
   insert(queue,f,r);
   del(queue,f,r);
   del(queue,f,r);
   return 0 ;
}
void insert(int lq[],int &front,int &rear)
{ if(rear==size-1)
   { printf("lq full"); getch(); return;
   }
  rear++; int data;
  printf("enter data \n ");scanf("%d",&data);
  lq[rear]=data;
  if(rear==0)
  front=0;
	
}
void del(int lq[],int &front,int &rear)
{  if(rear==-1)
    {printf("lq empty \n");getch(); return;}
    else printf("data deleted is %d",lq[front]);
	if(front==rear)
	front=rear=-1;
	else 
	front++;
	 
}
