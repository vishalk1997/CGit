#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL;

void main()
{
	int arr[5],i,n=0;
	int *iptr=arr;
	struct node *ptr,*temp,*temphead=NULL,*tra;
	
	printf("enter values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&iptr[i]);
	}
printf("1\n");
	while(n<5)
	{
		ptr=(struct node*)malloc(1*sizeof(struct node));
		ptr->data=iptr[n];
		ptr->link=NULL;
		if(temphead!=NULL)
		temp->link=ptr;		

		if(temphead==NULL)
		temphead=ptr;
			//temp=ptr;
		
		
		
		temp=ptr;
		printf("%p\n",ptr);
		
	   
		n++;
	}
printf("2\n");
	
	if(head==NULL)
	{
		head=temphead;
		
	}
	 else
	{
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
	
		temp->link=temphead;
	
	}
printf("3\n");
tra=head;
while(tra!=NULL)
{
printf("%d\n",tra->data);
tra=tra->link;
}


}


