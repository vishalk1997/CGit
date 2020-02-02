#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void add1(int*,int);
void add2(int*,int);
void add();
void display();
struct node *head=NULL;
struct node *head1=NULL, *head2=NULL;
int main()
{
	
	int arr1[5], arr2[5], i, n, opt;
	while(1)
	{
		printf("selct option\n 0-exit\n 1-add list 1\n 2-add list 2\n 3-add both list\n 4-display\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: 
				printf("enter array 1 values\n");
				for(i=0;i<5;i++)
				{
					scanf("%d",&arr1[i]);
				}
				add1(arr1,5);
			break;
			case 2: 
				printf("enter array 2 values\n");
				for(i=0;i<5;i++)
				{
					scanf("%d",&arr2[i]);
				}
				add2(arr2,5);
			break;
			case 3:
				add();
			break;
			case 4:
				display();
			break;
			default: printf("enter valid option\n");
		}
	}
}

void add1(int *arr1, int n)
{	
	int i=0;
	struct node *ptr,*temp;
	while(i<n)
	{
		ptr=(struct node*)malloc(1*sizeof(struct node));
		ptr->data=arr1[i];
		ptr->link=NULL;

		if(head1!=NULL)
		temp->link=ptr;
	
		if(head1==NULL)		
		head1=ptr;

		temp=ptr;
		i++;
		
	}
}

void add2(int *arr2, int n)
{
	int i=0;
	struct node *ptr,*temp;
	while(i<n)
	{
		ptr=(struct node*)malloc(1*sizeof(struct node));
		ptr->data=arr2[i];
		ptr->link=NULL;

		if(head2!=NULL)
		temp->link=ptr;
		
		if(head2==NULL)
		head2=ptr;
		temp=ptr;
		i++;
	}
}

void display()
{
	int i=0;
	struct node *temp, *temp2;
	temp=head;
	//temp2=head2;
	while(temp!=NULL)
	{	
		printf("%d\n",temp->data);
		temp=temp->link;
		
	}
	
	
	/*while(temp2!=NULL)
	{	
		printf("%d\n",temp2->data);
		temp2=temp2->link;
	}*/
}

void add()
{
	struct node *temp,*temp1,*temp2;
	temp1=head1;
	temp2=head2;

	if((head1==NULL)&&(head2==NULL))	
	{
		printf("empty list\n");
		return;
	}
	
	else
	{
		temp=head1;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=head2;
		head=head1;
		free(temp1);
		free(temp2);
	}
	
}
		
