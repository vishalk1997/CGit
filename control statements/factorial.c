#include<stdio.h>
void main(void)
{
	int n,num;
	long fact=1;
	printf("enter number\n");
	scanf("%d",&n);
	num=n;
	if(n<0)
	{
		printf("no factorial for -ve number");
		return;
	}
	else
	{
		while(n>1)
		{
			fact=fact*n;
			n--;
		}
		printf("factorial of %d is %ld",num,fact);
	}
}
