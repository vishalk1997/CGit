#include<stdio.h>
void main(void)
{
	int *p,i;
	int (*ptr)[5];
	int arr[5]={1,2,3,4,5};
	p=arr;//p is normal pointer which is used to point array's 0th element baseadress
	ptr=&arr;//ptr is array pointer which is used to point whole arrays adress
	for(i=0;i<5;i++)
	{
	printf("p=%x\n",&p[i]);
	printf("ptr=%x\n",ptr[i]);
	}
	//p++;
	//ptr++;
	printf("p++=%d\n",*p);
	printf("ptr++=%d\n",ptr);
}
