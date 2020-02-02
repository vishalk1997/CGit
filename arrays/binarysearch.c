#include<stdio.h>
#define MAX 50
int binarysearch(int arr[], int item, int size);
int main(void)
{
	int arr[MAX],i,size,item,index;
	printf("enter no of elements\n");
	scanf("%d",&size);
	printf("enter elements in sorted order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&item);
	index= binarysearch(arr,item,size);
	if(index==-1)
		printf("element not found\n");
	else
		printf("index of element is=%d\n",index);
}
int binarysearch(int arr[],int item,int size)
{
	int low=0,up=size-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(item<arr[mid])
			low=mid+1;
		else if(item>arr[mid])
			up=mid-1;
		else 
		       return mid;
	}
	return -1;
}	


		
	
