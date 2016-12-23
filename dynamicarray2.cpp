
#include<stdio.h>
#include<malloc.h>

 int size;
 


void addtoDarray(int**array,int *n,int *info)

{
	if((*n)==size)
	{  
		int *temp=NULL;
		temp=(int*)malloc((size*2)*sizeof(int));
		size=size*2;
		for(int i=0;i<(*n);i++)
		{
			temp[i]=*array[i]; printf("%d",*array[i]);
			
		} 
		temp[*n]=*info;(*n)++;
		*array=temp;
	}
	else
	{
	
	*array[*n]=*info;(*n)++;} 
}

void display(int **array,int *n)
{ int i=0;
  printf("data is :\n");
  while(i<(*n))
  { 
     printf("%d \n",*array[i]);i++;
  }
	
}

int main()
{
	char ch;
	int *array=NULL; int n=0,info;
	printf("enter initial size \n");
	scanf("%d",&size);
	array=(int*)malloc(size * sizeof(int));
	
	while(1)
	{
		printf(" want to enter data Y/N?");
		scanf(" %c",&ch); 
		if(ch=='Y'||ch=='y')
		{   printf("enter data\n");
		    scanf("%d",&info);
		    addtoDarray(&array,&n,&info);
		    continue;
		}
		else 
		
			{  display(&array,&n);free(array) ;break;}
	}return 0;
}
