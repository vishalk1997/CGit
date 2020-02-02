#include<stdio.h>
main()
{
  int min,max,temp,count=0;
  printf("enter min,max");
  scanf("%d,%d",&min,&max);
  for(min; min<=max; min++)
	{
	  temp=min;
	  count=0;
	for(temp; temp>0; temp=temp/10)
		{
		  count++;
		}
	  printf("%d",count);
	}
}
