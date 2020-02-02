#include<stdio.h>
main()
{
  int num,temp,count=0;
  printf("enter num");
  scanf("%d", &num);
	  temp=num;
	  count=0;
	  while(temp>0)
		{
		  temp=temp/10;
		  count++;
		 }
	  printf("%d", count);
}


