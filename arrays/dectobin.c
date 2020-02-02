#include<stdio.h>
void main(void)
{
	int arr[10],i=0,j,num;
	printf("enter num\n");
	scanf("%d",&num);
	while(num>0)
	{
		arr[i]=num%2;
		i++;
		num=num/2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
}
