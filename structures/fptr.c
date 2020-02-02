#include<stdio.h>

struct employee
{
  char name[30];
  int id;
  float salary;
  char gender;
  char grade;
  void (*fptr)(struct employee *);
  void (*fptr1)(struct employee *);
};

  

void display(struct employee *);
void update(struct employee *);

int main(void)
{
  struct employee e={"vishal",1,100000,'m','s'};
 
  e.fptr=display;
  e.fptr1=update;
  e.fptr(&e);
  e.fptr1(&e);
  e.fptr(&e);
}

void display(struct employee *ptr)
{
  printf("E name: %s\n",ptr->name);
   printf("E id: %d\n",ptr->id);
   printf("E salary: %f\n",ptr->salary);
 printf("E gender: %c\n",ptr->gender);
 printf("E name: %c\n",ptr->grade);
}

void update(struct employee *ptr)
{
  scanf("%s",ptr->name);
  __fpurge(stdin);
  scanf("%d",&ptr->id);
  __fpurge(stdin);
  scanf("%f",&ptr->salary);
  __fpurge(stdin);
  scanf("%c",&ptr->gender);
  __fpurge(stdin);
  scanf("%c",&ptr->grade);
  __fpurge(stdin);
}
