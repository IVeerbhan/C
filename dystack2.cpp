#include<stdio.h>
#include<stdlib.h>



int main()
{
	int *stack,*temp;
	int ne=0; int c=0;stack=NULL; int x;
	stack=(int*)malloc(1*sizeof(int));
	temp=NULL;int *top=NULL;
	int info;
	printf("1.enter data in stack:PUSH \n2.remove data from stack:POP \n3.exit and display stack contents\n");
	for(x=0;;x++)
	 {
	  printf("enter choice\n");
	  scanf("%d",&c);
	     if(c==1)
	      { printf("enter data");scanf("%d",&info);
		    temp=(int*)realloc(stack,(ne+2)*sizeof(int));
		if(temp!=NULL)
		 { temp[ne]=info;
	       stack=temp;top=(stack+ne);ne++;continue;
		 }
		else{printf("allocation failed");break;}
		
	      }
	    else if(c==2)
	    {  ne=ne-2; printf("element popped is :%d \n",*top);
	      top=(stack+ne);ne++;continue;
		}
	    else if(c==3)
	    { for(int i=0;i<ne;i++)
	       {printf("%d\n",stack[i]);
		   } break;
		}
    }
	return 0;
}

