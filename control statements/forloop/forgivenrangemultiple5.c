#include<stdio.h>
main()
{
 int min,max,temp;
 printf("enter min,max");
 scanf("%d,%d", &min,&max);
 temp=min;
 for(temp; temp<=max; temp++)
     	{
	  if((temp%5)==0)
		{
		  printf("%d", temp);
		}
	}

}
