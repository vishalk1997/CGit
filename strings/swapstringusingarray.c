#include<stdio.h>
main()
{

 char str1[20]="vishal\0";
 char str2[20]="kumar\0";
 char temp[20];
int i;
printf("string1: %s\n",str1);
printf("string2 :%s\n",str2);
for (i=0;str1[i]!='\0';i++)
{
  temp[i]=str1[i];
}
 temp[i]='\0';
for (i=0;str2[i]!='\0';i++)
{
  str1[i]=str2[i];
}
str1[i]='\0';

for (i=0;temp[i]!='\0';i++)
{
  str2[i]=temp[i];
}
 str2[i]='\0';
printf("string1 :%s\n",str1);
printf("string2 :%s\n",str2); 
}
