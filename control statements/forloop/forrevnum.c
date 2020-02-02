#include<stdio.h>
main()
{
  int num,temp,rem,rev=0;
  printf("Enter number");
  scanf("%d",&num);
 
  for(temp=num; temp>0; )
	{
	  rem= temp%10;
	  rev= rev*10+rem;
	  temp=temp/10;
	}
  printf("%d",rev);


}

