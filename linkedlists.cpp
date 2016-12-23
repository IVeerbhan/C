#include<conio.h>
#include<stdio.h>
#include"malloc.h"
struct node
{int data;
 struct node *link;
};
addatl(struct node **q,int loc,int num) //add at given location
{   struct node*temp;struct node*r;
   temp=*q;
   for(int i=0;i<loc;i++)
   {temp=temp->link;
      if(temp==NULL)
      { printf("there are less elements than given loc \n");return 0;
	  }
   }
	r=(struct node*)malloc(sizeof(struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}
addate(struct node**q,int num) // add at end
{  struct node *temp; struct node *r;
      temp=*q;
  while(temp->link!=NULL)
	{ temp=temp->link;
	}
 r=(struct node*)malloc(sizeof(struct node));	
	r->data=num;
	temp->link=r;
	r->link=NULL;
}
remove(struct node **q,int index) //remove from given location
{ struct node *temp,*prev; prev=*q;
  for(int i=0;i<index-1;i++)
     prev=prev->link;

  temp=prev->link;
  prev->link=temp->link;
  free(temp);
}
int size(struct node **q)
{  struct node *temp;
   temp=*q;
   int c,s;
   while(temp->link!=NULL)
    {c++;temp=temp->link; }
    c++;
    s=c*sizeof(struct node);
    return(s);
}
 int get(struct node**q,int index)
{ struct node *temp; 
  int i; temp=*q;
  for(i=0;i<index-1;i++)
  { temp=temp->link;}
  return(temp->data);
}

int search(struct node**q,int info)
{ struct node *temp; temp=*q; int i=0;
  while(temp->link!=NULL)
  { if (info==temp->data)
      {return(i);break;}
    else
	{temp=temp->link; i++;
	  }  
	  
	}
}
display(struct node **q)
{ struct node *temp;
  while(temp->link!=NULL){printf("%d \n",temp->data);temp=temp->link;
  } printf("%d \n",temp->data);
}
int main()
{ struct node *p; int sze;
  
  p=NULL;
  addate(&p,1);
  addate(&p,2);
  addate(&p,3);
  addate(&p,4);
  addatl(&p,0,0);
  remove(&p,2);
  display(&p);
  size(&p);
  printf("size is %d \n",sze);
}
