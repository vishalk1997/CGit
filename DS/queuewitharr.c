#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void insert(int);
void delete();
void display();
int count(int);
int arr[MAX];
int front=-1;
int rear=-1;

int main()
{
	int val,opt,total=0;
	while(1)
	{
		printf("enter option\n 0-exit\n 1-push\n 2-pop\n 3-display\n 4-count\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: 
				printf("enter val\n");
				scanf("%d",&val);
				insert(val);
			break;
			case 2:
				delete();
			break;
			case 3:
				display();
			break;
			case 4:
				total=count(total);
				printf("count= %d\n",total);
			break;
			default:
				printf("enter valid option\n");
		}
	}
}

void insert(int val)
{
	if(rear>=MAX-1)
	{
		printf("queue overflow\n");
		return;
	}
	if(front==-1)
	{
		front++;
		rear++;
		arr[rear]=val;
	}
	else
	{
		rear++;
		arr[rear]=val;
	}
}

void delete()
{ 
	int i;
	if(rear==-1)
	{
		printf("queue is empty\n");
		return;
	}
	rear--;
	
	for(i=0;i<=rear;i++)
	arr[i]=arr[i+1];
	
	
}
void display()
{
	int i;
	if(rear ==-1)
	{
		printf("queue is empty\n");
		return;
	}
	for(i=0;i<=rear;i++)
	printf("%d\n",arr[i]);
}

int count(int total)
{
	total=0;
	int i;
	for(i=0;i<=rear;i++)
	total++;
 	return total;
}
