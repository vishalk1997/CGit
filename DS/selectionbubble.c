#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void add(int);
void selectionsort();
void bubblesort();
void display();
void reverse();
struct node *head=NULL;

int main()
{
	int opt,val;
	while(1)
	{
		printf("select the option\n 0-exit\n 1-add at begining\n 2-selectionn sorting\n 3-display\n 4-bubblesort\n 5-reverse list\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: 
				printf("enter the value to add\n");
				scanf("%d",&val);
				add(val);
			break;
			case 2:
				selectionsort();
			break;
			case 3:
				display();
			break;
			case 4:
				bubblesort();
			break;
			case 5:
				reverse();
			break;
			default: printf("enter valid option\n");
		}
	}
}

void add(int val)
{
	struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
	ptr->data=val;
	ptr->link=head;
	head=ptr;
}

void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}

void selectionsort()
{
	if(head==NULL)
	{	
		printf("list is empty\n");
		return;
	}
	struct node *p,*q;
	int temp;
	for(p=head;p->link!=NULL;p=p->link)
	{
		for(q=p->link;q!=NULL;q=q->link)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}

void bubblesort()
{
	if(head==NULL)
	{	
		printf("list is empty\n");
		return;
	}
	struct node *p,*q,*e;
	int temp;
	for(e=NULL;head->link!=e;e=q)
	{
		for(p=head;p->link!=e;p=p->link)
		{
			q=p->link;
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}

void reverse()
{
	struct node *prev,*cur,*next;
	if(head==NULL)	
	{
		printf("list is empty\n");
		return;
	}
	cur=head;
	prev=NULL;
	while(cur!=NULL)
	{
		next=cur->link;
		cur->link=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
}
