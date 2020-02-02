#include<stdio.h>
void main(void)
{
	unsigned int x,y,diff,borrow;
	printf("enter x\n");
	scanf("%u",&x);
	printf("enter y\n");
	scanf("%u",&y);
	if(x<y)
	{
		printf("operation could not be done x is less than y \n");
		return;
	}
	diff=x^y;
	borrow=(~x)&y;
	while(borrow!=0)
	{
		borrow=borrow<<1;
		x=diff;
		y=borrow;
		diff=x^y;
		borrow=(~x)&y;
	}
	printf("diff=%u",diff);
}
