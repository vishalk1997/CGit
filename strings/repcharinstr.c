#include<stdio.h>
main()
{
  char str[20];
  int i,j,count;
  char t;
printf("enter string\n");
scanf("%s",&str);
printf("enter character to search\n");
scanf("%c",&t);

for(i=0;(str[i]!='\0');i++)
  {
    if(str[i]==' ')
    continue;
    else
   {
      t=str[i];
      count=0;
        for(j=0;str[j]!='\0';j++)
    	  {
              
     		 if((t==str[j]))
       			{
        		  count++;
         		 str[j]=' ';
      			  }
   	  }
	
	printf("char: %c, count: %d\n",t,count);
    }
 }
}


 

