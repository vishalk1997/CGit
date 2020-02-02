#include<stdio.h>
#define MAX 20

void main(void)
{
	int arr[MAX],i,j,min,n,temp;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		if(i!=min)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
		printf("sorted list is\n");
		for(i=0;i<n;i++)
			printf("%d",arr[i]);
	
}

