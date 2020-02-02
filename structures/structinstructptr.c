#include<stdio.h>
struct book
{
  char bname[30];
  char author[20];
  unsigned int pages;
  float price;
};
  
struct employee
{
  char ename[30];
  unsigned int eid;
  float salary;
  char gender;
  char grade;                       
  struct book b;
};
void update(struct employee *ptr);
void display(struct employee *ptr);
void main(void)
{

  struct employee e;
  struct employee *ptr;
  ptr=&e;
 update(&e);
 display(&e);
}

void update(struct employee *ptr)
{
  printf("enter e name\n");
  scanf("%s",ptr->ename);
  __fpurge(stdin);
  printf("enter e id\n");
  scanf("%d",&ptr->eid);
   __fpurge(stdin);
  printf("enter e salary\n");
  scanf("%f",&ptr->salary);
   __fpurge(stdin);
  printf("enter e gender\n");
  scanf("%c",&ptr->gender);
   __fpurge(stdin);
  printf("enter e grade\n");
  scanf("%c",&ptr->grade);
   __fpurge(stdin);
  printf("enter b name\n");
  scanf("%s",ptr->b.bname);
   __fpurge(stdin);
  printf("enter b author\n");
  scanf("%s",ptr->b.author);
   __fpurge(stdin);
  printf("enter b pages\n");
  scanf("%d",&ptr->b.pages);
   __fpurge(stdin);
  printf("enter b price\n");
  scanf("%f",&ptr->b.price);
   __fpurge(stdin);
 }
 
void display(struct employee *ptr)
{
  printf("E name: %s - %p\n", ptr->ename,ptr->ename);
  printf("E id: %d - %p\n", ptr->eid,&ptr->eid);
  printf("E salary: %f - %p\n", ptr->salary,&ptr->salary);
  printf("E gender: %c - %p\n", ptr->gender,&ptr->gender);
  printf("E grade: %c - %p\n", ptr->grade,&ptr->grade);
  printf("B name: %s - %p\n", ptr->b.bname,ptr->b.bname);
  printf("B author: %s - %p\n", ptr->b.author,ptr->b.author);
  printf("B pages: %d - %p\n", ptr->b.pages,&ptr->b.pages);
  printf("B price: %f - %p\n", ptr->b.price,&ptr->b.price);
}
  
