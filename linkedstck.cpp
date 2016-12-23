#include<stdio.h>
#include<conio.h>
void push();
void pop();  
  
  struct node
  { int info;
    node*next;
  }*top=NULL;
int main()
{ push();
  push();
  push();
  pop();
  pop();
  printf("%d",top->info);
}
void push()
{ node*ptr=new node;
  int data;
  if(ptr==NULL)
  {printf("node not created \n"); getch();return;
  }
  printf("enter data \n");
  scanf("%d",&data);
  ptr->info=data;
  ptr->next=top;
  top=ptr;
}


void pop()
{ if(top==NULL)
  { printf("stack empty \n");getch();return;
  }
  node*ptr=top;
  printf("element being popped %d \n",ptr->info);
  top=top->next;
  delete ptr;
}
