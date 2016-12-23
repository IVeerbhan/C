
#include<stdio.h>
#include<conio.h>
void push(int stack[],int &top,int data,int size);
void pop(int stack[],int &top);

int main()
{  int j;
   printf("enter the number of elements");
   scanf("%d",&j);
 
  int stack[j];
  int top=0;
  int item,i;
  for(i=0;i<j;i++)
  {printf("enter data");scanf("%d",&item); push(stack,top,item,j);}
  pop(stack,top);
  return 0;
}

void push(int stack[],int &top,int data,int size)
{ int j;j=size;
  if(top==j-1)
  
  {printf("stack full");getch();return;}
  else 
  
  stack[top]=data;
}
void pop(int stack[],int &top)
{ if(top==-1)
  { printf("stack empty");
    getch(); return;
  }
   
   printf("data popped is %d",stack[top]);
   top++;
    
  
}
