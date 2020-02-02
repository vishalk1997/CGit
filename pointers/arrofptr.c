#include<stdio.h>
void main(void)
{
	int *arr[4];
	int a=1,b=2,c=3,d=4,i;
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;
	arr[3]=&d;
	for(i=0;i<4;i++)
		printf("Addr %p - Val %d \n",arr[i],*arr[i]);

}
	
