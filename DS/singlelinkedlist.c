#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

void add_at_beginning(int);
void delete_at_beginning();
struct node *head=NULL;
int main()
{
	int opt,num;
	while(1)
	{
		printf("select option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1:
				printf("enter number\n");
				scanf("%d",&num);
				add_at_beginning(num);
			break;
			case 2:
				delete_at_beginning();
			break;
			default: printf("enter valid option\n");
		}
	}
}
void add_at_beginning(int num)
{
	struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
	ptr->data=num;
	ptr->link=head;
	head=ptr;
}			

void delete_at_beginning()
{
	struct node *temp;
	temp=head;
	if(head!=NULL)
	{
		head=head->link;
		free(temp);
	}
	else
	{
		printf("empty list\n");
		return;
	}
}
