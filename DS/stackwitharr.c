#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void push(int);
void pop();
void display();
int arr[MAX];
int head=-1;

int main()
{
	int val,opt;
	while(1)
	{
		printf("enter option\n 0-exit\n 1-push\n 2-pop\n 3-display\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: 
				printf("enter val\n");
				scanf("%d",&val);
				push(val);
			break;
			case 2:
				pop();
			break;
			case 3:
				display();
			break;
			default:
				printf("enter valid option\n");
		}
	}
}

void push(int val)
{
	if(head>=MAX-1)
	{
		printf("stack overflow\n");
		return;
	}
	head++;
	arr[head]=val;
}

void pop()
{
	if(head==-1)
	{
		printf("stack is empty\n");
		return;
	}
	head--;
}
void display()
{
	int i;
	if(head==-1)
	{
		printf("stack is empty\n");
		return;
	}
	for(i=head;i>=0;i--)
	printf("%d\n",arr[i]);
}
	
