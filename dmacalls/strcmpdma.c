#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int string_compare(int*,int*);
main()
{
  int l1,l2,val;
  char* ptr1=(char*)calloc(6,sizeof(char));
  char* ptr2=(char*)calloc(6,sizeof(char));
  printf("enter two strings\n");
  scanf("%s %s",ptr1,ptr2); 
  l1=strlen(ptr1);
  l2=strlen(ptr2);
  val=string_compare(ptr1,ptr2);
  if(val==0)
  printf("strings are equal\n");
  else
  printf("strings are not equal\n");
  free(ptr1);
  free(ptr2);
}

int string_compare(int* ptr1, int* ptr2)
{
  int val;
  val=strcmp(ptr1,ptr2);
  return val;
}
