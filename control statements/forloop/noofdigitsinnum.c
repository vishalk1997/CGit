#include<stdio.h>
main()
{
  int x, count=0;
  printf("enter x");
  scanf("%d", &x);
  if(x==0)
	{
	  printf("1");
	}
  else
	{
	  for(x;x>0;x=x/10)
		{
		  count++;
		}
  	  printf("%d", count);
	}
}
