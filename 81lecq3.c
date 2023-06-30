#include<stdio.h>
main()
{
	int n;
	
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	printf("enter the value of array A element:\n");
	 
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]",i);
			scanf("%d",&a[i]);
		}
		
	printf("enter the value of array B element:\n");
	
	
	    for(i=0;i<n;i++)
		{
			printf("enter b[%d]",i);
			scanf("%d",&b[i]);
		}	
		
		for(i=0;i<n;i++)
		{
			c[i]=a[i]+b[i];
			printf("the sum of A and B element is:%d\n",c[i]);  
	    }
	    
    
}
