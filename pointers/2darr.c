#include<stdio.h>
void main(void)
{
	int arr[3][3]={
			{1,2,3},
			{4,5,6},
			{7,8,9}
	       	};
	int (*ptr)[3];
	ptr=arr;
	printf("%p	%p	%p\n", ptr, ptr+1,ptr+2);
	printf("%p      %p      %p\n", *ptr, *(ptr+1),*(ptr+2));
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", ptr[i][j]);
		printf("\n");
	}
}

