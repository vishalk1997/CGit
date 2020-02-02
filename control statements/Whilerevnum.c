#include<stdio.h>
void main(void)
{
  int temp,num,rem,rev=0;
  printf("enter number");
  scanf("%d",&num);
  temp=num;
  while(temp>0)
	{
	  rem=temp%10;
	  rev=rev*10+rem;
  	  temp=temp/10;
	}
printf("%d",rev);



}




