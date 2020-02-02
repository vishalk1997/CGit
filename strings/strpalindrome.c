#include<stdio.h>
#include<stdlib.h>

int strcmp(const char*,char*);
void strrev(const char*,char*);
int main()
{
  char str1[10]="abcdcbab";
	
  char str2[10];
  int x;
	printf("%x\n",str1);
  strrev(str1,str2);
  x=strcmp(str1,str2);
  if(x==100)
  {
    exit(0);
   }  
}

void strrev(const char* str1,char* str2)
{
  int i,c=0,j;
  for (i=0;str1[i]!='\0';i++)
  {
    c++;
  }
 for (i=0,j=c-1;str1[i]!='\0';i++,j--)
  {
    str2[j]=str1[i];
   }

}

int strcmp(const char* str1,char* str2)
{
  int i;
 for(i=0;str1[i]!='\0';i++)
     {
	if (str1[i]!=str2[i])
		{
		  printf("string is not palindrome\n");
		  return 100;
		}
      }
printf("string is palindrome\n");
}


