#include<stdio.h>
void main(void)
{
	unsigned int x,y,sum,carry;
	printf("enter x\n");
	scanf("%u",&x);
	printf("enter y\n");
	scanf("%u",&y);
	sum=x^y;
	carry=x&y;
	while(carry!=0)
	{
		carry=carry<<1;
		x=sum;
		y=carry;
		sum=x^y;
		carry=x&y;
	}
	printf("sum=%u\n",sum);
}
