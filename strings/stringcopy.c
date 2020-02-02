#include<stdio.h>
main()
{

 char arr1[20]="vishal\0", arr2[20];
 int i=0;
printf("string1: %s\n",arr1);
 for(i=0;arr1[i]!='\0';i++)
{
  arr2[i]=arr1[i];
}
 arr2[i]='\0';
printf("string2: %s\n",arr2);
}
