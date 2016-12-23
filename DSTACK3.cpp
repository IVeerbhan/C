
#include<stdio.h>
#include"addtodarray.c"
int main()
{
	int *darray,info,ne=0;
	darray=NULL;
	printf("enter data\n");
	scanf("%d",&info);
	addtoDarray(&darray,&ne,&info);
	printf("%d",darray[ne]);
	
	return 0;
	
	
	
	
	
	
}
