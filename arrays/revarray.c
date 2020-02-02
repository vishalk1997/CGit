#include<stdio.h>
void main(void)
{
	int arr[6]={1,2,3,4,5,6},temp,i,j;
	for(i=0,j=5;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<6;i++)
		printf("%d",arr[i]);
	printf("\n");
}
