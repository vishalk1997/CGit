#include<stdio.h>

struct employee
{
  char name[30];
  int id;
  float salary;
  char gender;
  char grade;
};
struct op
{
  void (*fptr)(struct employee );
};
void display(struct employee );

int main(void)
{
  struct employee e={"vishal",1,100000,'m','s'};
  struct op d;
  d.fptr=display;
  d.fptr(e);
}

void display(struct employee e)
{
  printf("E name: %s\n",e.name);
   printf("E id: %d\n",e.id);
   printf("E salary: %f\n",e.salary);
 printf("E gender: %c\n",e.gender);
 printf("E name: %c\n",e.grade);
}
