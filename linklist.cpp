#include<stdio.h>
#include<stdlib.h>
 int addend(struct node**,int);
 int addbeg(struct node**,int);
int addafter(struct node**,int,int);
int del(struct node**,int);
int display(struct node*);
struct node
{ int data; struct node *link;
};
int main()
{
	struct node *p;
	p=NULL;
	addend(&p,1);
	addend(&p,2);
	addend(&p,3);
	addend(&p,4);
	addend(&p,5);
	addbeg(&p,0);
	addbeg(&p,-1);
	addafter(&p,3,3);
	del(&p,3);
	display(p);
}

 int addend(struct node**q,int num)
	{  struct node *temp,*r;
	    temp=*q;
	    if(temp==NULL)
	    { temp=(node*)realloc((*q),1*sizeof(struct node));
	      temp->data=num;
	      temp->link=NULL;
	      
	       (*q)=temp;	
		}
		else
		{
			temp=*q;
			while(temp->link!=NULL)
			  temp=temp->link;
           r=(node*)malloc(sizeof(struct node));
		   r->data=num; r->link=NULL;
		   temp->link=r;
	    }
			
	}
  int addbeg(struct node**q,int num)		
{
	
	struct node*temp;
	temp=(node *)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;
	*q=temp;
}
int addafter(struct node**q,int loc,int num)
   {
	struct node*temp,*r;
	int i;
	temp=*q;
	for(i=0;i<loc;i++)
	{
		temp=temp->link;
		if(temp==NULL)
		{ printf("there are less units than given number \n");break;
		
		}
	}
	r=(node*)malloc(sizeof (struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
	}	
 int display(struct node *q)
	{
		while(q!=NULL)
		{ printf("%d\n",q->data);q=q->link;
		}
		
	}
 int del(struct node**q,int num)	
	{
		struct node*old,*temp;
		temp=*q;
		while(temp!=NULL)
		{ if(temp->data==num)
		    {
		    	if(temp==*q)
		    	{ *q=temp->link;free(temp);return 0;
				}
		        else
				{old->link=temp->link;free(temp);return 0;
					}	
			}
		
		else{old=temp;
		     temp=temp->link; }
	
		}
		
		printf("element not found\n");
	}


