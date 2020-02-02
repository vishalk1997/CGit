#include<stdio.h>
main()
{
  char str1[20]="vkuma\0", str2[20]="vkumar\0";
  int l1=0,l2=0,i;

	for(i=0;str1[i]!='\0';i++)
	{
	 l1++;
	}

	for(i=0;str2[i]!='\0';i++)
	{
	 l2++;
	}
printf("l1=%d\n",l1);
printf("l2=%d\n",l2);
		if(l1!=l2)
		{
		  printf("len:strings are not equal\n");
		  exit(0);
		}
		 else
		{
  		 for(i=0;str1[i]!='\0';i++)
		{
  	   	 if (str1[i]!=str2[i])
			{
			 printf("cmp: strings are not same\n");
			exit(0);
			}
		}
	    printf("cmp: strings are same\n");
	        }	
}
