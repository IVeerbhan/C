#include<stdio.h>


int main()

{   int n;
    printf("enter size\n",n);
    scanf("%d",&n);
	int a[n];
	int temp,hole;
	int i ;
	printf("enter data\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<n;i++)
	{
		
		temp=a[i];
		hole=i;
		while(hole>0&&a[hole-1]>temp)
		 { a[hole]=a[hole-1];
		   hole--;
		 }
		a[hole]=temp;
		
	}
	
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
}
