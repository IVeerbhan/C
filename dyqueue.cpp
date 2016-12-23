#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *queue,*temp;
	queue=temp=NULL;
	int info,ne,x,ch;
	info=ne=x=0;
	int*front,*rear;
	front=rear=NULL;
	printf("1.enter data in queue\n2.remove data \n3.display\n");
	for(int i=0;;i++)
	{
		printf("enter choice\n");
		scanf("%d",&ch);
		if(ch==1)
		 { printf("enter data\n");
		   scanf("%d",&info);
		   temp=(int*)realloc(queue,(ne+2)*sizeof(int));
		   if(temp!=NULL)
		     {queue=temp;
		       queue[ne]=info;ne++;
		        if(ne==1){front=rear=(queue+0);continue;}
		        else {rear=(queue+(ne-1));continue;}
			 }
		 }
		if(ch==2)
		 {
		 	x++;
		 	printf("element deletedis %d",*front);
		 	front=(queue+x);ne--;
		 }
		if(ch==3)
		{
			printf("data is :\n");
			int j;
			for(j=x;(queue+j)<=rear;j++)
			printf("%d\n",queue[j]);
        }
    } return 0;
}














