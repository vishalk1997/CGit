#include<stdio.h>
#include<stdlib.h>

void read(char* ptr,int n);
void display(char* ptr, int n);
int main()
{ 
int NUM=5;
  char *ptr=(char*)malloc(NUM*sizeof(char));
  read(ptr,NUM);
  display(ptr,NUM);
  free(ptr);
}

 void read(char* ptr, int NUM)
{
  int i;
  for(i=0;i<NUM;i++)
   {
      scanf("%c",&ptr[i]);
    }
}

 void display(char* ptr, int NUM)
{
  int i;
  for(i=0;i<NUM;i++)
   {
	printf("%c\n",ptr[i]);
    }
}
