#include<stdio.h>
void main(void)
{
	int x=5;
	int *ptr1,**ptr2;
	ptr1=&x;
	ptr2=&ptr1;
	printf("x=%d\n&x=%x\nptr1=%x\n&ptr1=%x\nptr2=%x\n&ptr2=%x",x,&x,ptr1,&ptr1,ptr2,&ptr2);
}
