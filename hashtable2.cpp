#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int size,ch,key,data;
	printf("enter the size of the hashtable\n");
	scanf("%d",&size);int count=0;
	int *hasht=(int*)malloc(size*sizeof(int));int i;
	for(i=0;i<size;i++) hasht[i]=NULL;
	 i=1;
	while(1)
{
	printf("1.enter data in hashtable\n2.search data\n3.display\n4.exit\n");
	scanf("%d",&ch);
	 
	switch(ch)
	{
		case 1:if(count<=size)
		       {
		       
		       printf("enter data \n");
		       scanf("%d",&data);
		       key=data%10;
		       if(hasht[key]!=NULL)
		       {  while(hasht[key]!=NULL)
			       {
			          key=(data+i)%10;i++;
		       	   }
			   }
               hasht[key]=data;	count++;}
			   else{printf("size exceeded\n");exit(0);
			   }	
		       break;
		case 2:printf("enter data to be searched\n");
		       scanf("%d",&data); int flag;flag=0; 
		       for(int j=0;j<size;j++)
		        {  if(hasht[j]==data)
		        	{ flag=1;;
		        	 printf("data is at %d index",j);}
		        }
		        if(flag==0)
		        printf("there is no such data\n");
		        break;
		case 3:  int k;
		         for(k=0;k<size;k++)       
		         printf("%d\n",hasht[k]);
		         break;
		case 4: exit(0);
		case 5: printf("wrong choice\n"); break;}
}
return 0;
}

