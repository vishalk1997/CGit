#include<stdio.h>
void main(void)
{

	int x,sum=0,temp,rem;
	printf("enter num\n");
	scanf("%d",&x);
	temp=x;
	while(rem!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("%d\n",sum);
}
