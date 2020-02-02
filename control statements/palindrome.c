#include<stdio.h>
main()
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

if(rev=num)
printf("Number is a palindrome");
else
printf("Number is not palindrome");
}




