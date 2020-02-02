#include<stdio.h>
main()
{
 char str1[10]="vishal", str2[10]="kumar";
printf("string1 :%s\n",str1);
printf("string2 :%s\n",str2);
 char temp;
 int i,j;

for(i=0;((str1[i]!='\0')&&(str2[i]!='\0')); i++)
{ 
 temp=str1[i];
 str1[i]=str2[i];
 str2[i]=temp; 
}
for(j=i; str2[i]!='\0'; i++)
{
str1[i]=str2[i];
}

for(j; str1[j]!='\0'; j++)
{
  str2[j]=str1[j];
}

str1[i]='\0';
str2[j]='\0';
printf("string1 :%s\n",str1);
printf("string2 :%s\n",str2);
}

