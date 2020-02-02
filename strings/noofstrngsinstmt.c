#include<stdio.h>
main()
{
char a[50]="vi ven em bed ded ame erp et";
char b[20];
  int i,j,count=0;
for(i=0;a[i]!='\0';i++)
{ 
  if((a[i]==' ')&&(a[i]!='\0'))
	{
	  count++;
         }
}
count++;
printf("total no of strings= %d\n",count);
}
