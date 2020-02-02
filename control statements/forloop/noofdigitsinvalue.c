#include<stdio.h>
main()
{
  int num,temp,count=0;
  printf("enter number");
  scanf("%d", &num);
  temp=num;
  while(temp>0)
	{
	  temp=temp/10;
	  count++;
	}
  printf("%d", count);
}
