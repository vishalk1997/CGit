#include<stdio.h>
#include<string.h>
struct bookname{
 char bname[30];
 char author[30];
 unsigned int pages;
 char price;
};

int main(void)
{
  struct bookname b;
  printf("Enter book name\n");
  scanf("%s",b.bname);
  __fpurge(stdin);
 // strcpy(b.bname," c in depth ");
  printf("Enter author name\n");
  scanf("%s",b.author);
  __fpurge(stdin);
  printf("Enter no of pages\n");
  scanf("%d",&b.pages);
  __fpurge(stdin);
  printf("Enter price\n");
  scanf("%c",&b.price);
  __fpurge(stdin);


 printf("Book name %p %d %s\n",b.bname,sizeof(b.bname),b.bname);
 printf("Author name %p %d %s\n",b.author,sizeof(b.author),b.author);
 printf("Book pages %p %d %d\n",&b.pages,sizeof(b.pages),b.pages);
 printf("Book price %p %d %c\n",&b.price,sizeof(b.price),b.price);
}
