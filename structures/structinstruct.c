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

void main(void)
{

  struct employee e;
  printf("enter e name\n");
  scanf("%s",e.ename);
  __fpurge(stdin);
  printf("enter e id\n");
  scanf("%d",&e.eid);
   __fpurge(stdin);
  printf("enter e salary\n");
  scanf("%f",&e.salary);
   __fpurge(stdin);
  printf("enter e gender\n");
  scanf("%c",&e.gender);
   __fpurge(stdin);
  printf("enter e grade\n");
  scanf("%c",&e.grade);
   __fpurge(stdin);
  printf("enter b name\n");
  scanf("%s",e.b.bname);
   __fpurge(stdin);
  printf("enter b author\n");
  scanf("%s",e.b.author);
   __fpurge(stdin);
  printf("enter b pages\n");
  scanf("%d",&e.b.pages);
   __fpurge(stdin);
  printf("enter b price\n");
  scanf("%f",&e.b.price);
   __fpurge(stdin);

  printf("E name: %s - %p\n", e.ename,e.ename);
  printf("E id: %d - %p\n", e.eid,&e.eid);
  printf("E salary: %f - %p\n", e.salary,&e.salary);
  printf("E gender: %c - %p\n", e.gender,&e.gender);
  printf("E grade: %c - %p\n", e.grade,&e.grade);
  printf("B name: %s - %p\n", e.b.bname,e.b.bname);
  printf("B author: %s - %p\n", e.b.author,e.b.author);
  printf("B pages: %d - %p\n", e.b.pages,&e.b.pages);
  printf("B price: %f - %p\n", e.b.price,&e.b.price);
}
  
