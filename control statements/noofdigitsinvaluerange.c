#include<stdio.h>
void main(void)
{
  int min,max,temp,count=0;
  printf("enter min,max\n");
  scanf("%d,%d", &min,&max);
	temp=min;
  while(temp<max)
	{
	  count++;
		temp++;
	}
	printf("no of digits are %d\n",count);
}

