#include<stdio.h>
void main(void)
{
	int x;
	printf("enter number\n");
	scanf("%d",&x);
	if((x&1)==1)
		printf("odd number\n");
	else
		printf("even number");
}
