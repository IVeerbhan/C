#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main()
{
	 int *array;
	 int ne=0,s,info;char ch;
	array=NULL;int i=0;
	printf("enter initial size");
	scanf("%d",&s);
	array=(int *)malloc(s*sizeof(int*));
	for(ne=0;;ne++)	
	{  printf("enter data \n");
	   scanf("%d",&info);
	   if(ne+1<s)
	     {
	      array[ne]=info;}
	      else 
	     {
	       int * array2;
	      array2=(int *)malloc((s*2)*sizeof(int)); s=s*2;
	      for(i=0;i<ne-1;i++)
	        array2[i]=array[i];
	        array2[ne]=info; array=array2;}
	
	  
	  
	  printf("want to enter more data? Y(1)/N(0)"); 
	  scanf(" %c",&ch);
	   if(ch=='Y') {
	   continue;} 
	   else break;	              
	}
	
printf("data entered is :");
for(i=0;i<=ne;i++)
printf("%d \n",*(array+i));	
	
return 0;	
}
