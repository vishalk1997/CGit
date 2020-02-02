#include<stdio.h>
void main(void)
{
	int arr[20],n,i,j,temp,xchange;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		xchange=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				xchange++;
			}
		}
		if(xchange==0)
			break;
	}
	printf("sorted array is\n ");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}



