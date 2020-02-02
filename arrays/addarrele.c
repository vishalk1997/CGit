#include<stdio.h>
void main(void)
{
	int arr[5],sum=0,i;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
	
		scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
		sum=sum+arr[i];
	printf("%d\n",sum);
}
		
