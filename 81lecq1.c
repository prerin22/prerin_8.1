#include<stdio.h>
main()
{
	int n;
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	printf("enter the array element:");
	
	for(i=0;i<=n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("the length of an array is: %d",a[n]);
	
}
