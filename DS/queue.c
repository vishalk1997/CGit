#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void addatlast(int);
void deleteatbeginning();
void display();
int count(int);
void addatbeginning(int);
void deleteatlast();
void deletenode(int);
struct node *front=NULL;
struct node *rear=NULL;

int main()
{
	int val,opt,total;
	while(1)
	{
		printf("enter option 0-exit 1-add at last 2-delete at beginning 3- display 4-count 5-add at beginning 6-delete at last 7-delete particular node\n");
		scanf("%d",&opt);
		
		switch(opt)
		{
			case 0: exit(0);
			case 1:
				printf("enter number\n");
				scanf("%d",&val);
				addatlast(val);
			break;
			case 2:
				deleteatbeginning();
			break;
			case 3:
				display();
			break;
			case 4:
				total=count(total);
				printf("count:%d\n",total);
			break;
			case 5:
				printf("enter val\n");
				scanf("%d",&val);
				addatbeginning(val);
			break;
			case 6:
				deleteatlast();
			break;
			case 7:
				printf("enter value to search\n");
				scanf("%d",&val);
				deletenode(val);
			break;
			default:printf("enter valid option\n");
		}
	}
}

void addatlast(int val)
{
	struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
	ptr->data=val;
	ptr->link=NULL;
	if((front==NULL)&&(rear==NULL))
		{
			front=rear=ptr;
			printf("%d\n",rear->data);
			return;

		}
	else
		{
			rear->link=ptr;
			rear=ptr;
			printf("%d\n",rear->data);
		}
	
}	
 		
void deleteatbeginning()
{
	struct node *temp;
	
	if((front==NULL)&&(rear==NULL))
		{
			printf("list is empty\n");
			return;
		}
	
	if(front->link==NULL)
	{
		free(front);
		front=rear=NULL;
		return;
	}
	else
	{
		temp=front;
		front=front->link;
		free(temp);
	}
}

void display()
{	
	struct node *temp;
	if((front==NULL)&&(rear==NULL))
		{
		
			printf("list is empty\n");
			return;

		}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}		

int count(int total)
{	
	total=0;
	struct node *temp;
	if((front==NULL)&&(rear==NULL))
		{
		
			printf("list is empty\n");
			return 0;

		}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			total++;
			temp=temp->link;
		}
		printf("total=%d\n",total);
		return total;
	}
}

void addatbeginning(int val)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->link=front;
	if((front==NULL)&&(rear==NULL))
		{
		
			front=rear=ptr;
			return;

		}
	else
		{
			front=ptr;
			return;		
		}
}

void deleteatlast()
{
	struct node *pre, *cur;
	if((front==NULL)&&(rear==NULL))
		{
		
			printf("list is empty\n");
			return;

		}
	if(front->link==NULL)
		{
			free(front);
			front=rear=NULL;
			return;
		}
	else
		{
			cur=front->link;
			pre=front;
			while(cur->link!=NULL)
			{	
				pre=cur;
				cur=cur->link;
			}
			
			free(cur);
			pre->link=NULL;
		}
}

void deletenode(int val)
{
	struct node *pre, *cur, *temp;
	if((front==NULL)&&(rear==NULL))
		{
		
			printf("list is empty\n");
			return;

		}
	if(front->data == val)
		{
			temp=front;
			front=front->link;
			free(temp);
			front=rear=NULL;
			return;
		}
	else
		{
			cur=front->link;
			pre=front;
			while(cur!=NULL)
			{
				if(cur->data==val)
				{
					temp=cur;
					pre->link=cur->link;
					free(temp);
					return;
				}
				pre=cur;
				cur=cur->link;
			}
		printf("element not found \n");
		}
}				
