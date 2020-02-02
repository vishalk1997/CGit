#include<stdio.h>


struct book{
 char bname[30];
 char author[20];
 unsigned int pages;
 float price;
};
 
void update(struct book *ptr);
void display(struct book *ptr);
int main(void)
{
  struct book b;
  struct book *ptr;
  ptr=&b;
  
  update(&b);
  display(&b);
}

void update(struct book *ptr)
{
 printf("enter book name\n");
 scanf("%s",ptr->bname);
 printf("enter author name\n");
 scanf("%s",ptr->author);
 printf("enter pages\n");
 scanf("%d",&ptr->pages);
 printf("enter price\n");
 scanf("%f",&ptr->price);
}

void display(struct book *ptr)
{
  printf("Book Name: %s-%p\n",ptr->bname,ptr->bname);
  printf("Author Name: %s-%p\n",ptr->author,ptr->author);
  printf("Pages: %d-%p\n",ptr->pages,&ptr->pages);
  printf("Price: %f-%p\n",ptr->price,&ptr->price);
}
