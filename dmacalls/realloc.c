#include<stdio.h>
#include<stdlib.h>

void read(char* ptr,int n);
void display(char* ptr, int n);
void read1(char*);
void display1(char*);
int main()
{ 
int NUM=5;
  char *ptr=(char*)malloc(NUM*sizeof(char));
  read(ptr,NUM);
  display(ptr,NUM);
  char *nptr=(char*)realloc(ptr,7*sizeof(char));
  read1(ptr);
  display1(ptr);
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

void read1(char* ptr)
{
  int i;
  for(i=0;i<7;i++)
   {
      scanf("%c",&ptr[i]);
    }
}

 void display1(char* ptr)
{
  int i;
  for(i=0;i<7;i++)
   {
	printf("%c\n",ptr[i]);
    }
}
