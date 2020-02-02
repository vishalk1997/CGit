#include<stdio.h>
#include<string.h>
struct bookname{
 char bname[30];
 char author[30];
 unsigned int pages;
 float price;
};

int main(void)
{
  int i;
  struct bookname b[1];
  for(i=0;i<1;i++)
{
  printf("Enter book name\n");
  scanf("%s",b[i].bname);
    __fpurge(stdin);
  char gets(char b[i].bname);
  
 // strcpy(b.bname," c in depth ");
  printf("Enter author name\n");
  scanf("%s",b[i].author);
  __fpurge(stdin);
  printf("Enter no of pages\n");
  scanf("%u",&b[i].pages);
  __fpurge(stdin);
  printf("Enter price\n");
  scanf("%f",&b[i].price);
  __fpurge(stdin);
}
for(i=0;i<3;i++)
{
 printf("Book name %p %d \n",b[i].bname,sizeof(b[i].bname));
 gets();
 printf("Author name %p %d %s\n",b[i].author,sizeof(b[i].author),b[i].author);
 printf("Book pages %p %d %d\n",&b[i].pages,sizeof(b[i].pages),b[i].pages);
 printf("Book price %p %d %f\n",&b[i].price,sizeof(b[i].price),b[i].price);
}

}

