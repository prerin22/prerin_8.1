#include<stdio.h>
main()
{
	int n;
	
	printf("enter the number of elements:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum=0;
	float average;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("the avg of array elements is: %f",average);
}
	
	

