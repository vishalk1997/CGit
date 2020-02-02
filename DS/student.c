#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct doj
{
	int date;
	int month;
	int year;
};

struct student
{
	char name[30];
	unsigned int id;
	float percentage;
	unsigned int bno;
	struct student *link;
	struct doj d;
};

void add_at_beginning(struct student );
void delete_at_beginning();
void display();
int count_students();
int search_id(int);
int search_name(char*);
void add_at_last(struct student);
void delete_list();
void deletelastnode();
void deletestudent(int);
struct student *head=NULL;
int main()
{
	struct student s;
	int opt,total,id;
	char name[30];
    char *sname=name;
	while(1)
	{
		printf("\t\t\t\tselect option\n \t\t0-exit\n \t\t1-add at beginning\n \t\t2-delete at beginning\n \t\t3-display\n \t\t4-count students\n \t\t5-search using id\n \t\t6-search using name\n \t\t7- Add at last\n \t\t8-Delete entire list\n \t\t9-Delete last details\n \t\t10-delete particular student\n");
		scanf("%d",&opt);
	
		switch(opt)
		{
			case 0: exit(0);
			
			case 1:
 				
				printf("enter name\n");
				scanf("%s",s.name);
				printf("enter id\n");
				scanf("%d",&s.id);
				printf("enter percentage\n");
				scanf("%f",&s.percentage);
				printf("enter bno\n");
				scanf("%d",&s.bno);
				printf("enter date of joining\n");
				printf("enter date\n");
				scanf("%d",&s.d.date);
				printf("enter month\n");
				scanf("%d",&s.d.month);
				printf("enter year\n");
				scanf("%d",&s.d.year);

				add_at_beginning();
			break;

			case 2:
				delete_at_beginning();
			break;
			
			case 3:
				display();
			break;

			case 4:
				total=count_students();
				printf("Total Students= %d\n",total);
			break;

			case 5:
				printf("Enter Id to search\n");
				scanf("%d",&id);
				total=search_id(id);
				printf("Serial No: %d\n",total);
			break;

			case 6:
				printf("enter Student name to search\n");
				scanf("%s",sname);
				total=search_name(name);
				printf("Serial No= %d\n",total);
			break;
			
			case 7:
				printf("enter name\n");
				scanf("%s",s.name);
				printf("enter ID\n");
				scanf("%d",&s.id);
				printf("enter percentage\n");
				scanf("%f",&s.percentage);
				printf("enter batch no\n");
				scanf("%d",&s.bno);
				printf("Enter Date of joining\n");
				printf("Enter date\n");
				scanf("%d",&s.d.date);
				printf("Enter month\n");
				scanf("%d",&s.d.month);
				printf("Enter year\n");
				scanf("%d",&s.d.year);
				add_at_last(s);
			break;
			
			case 8:
				delete_list();
			break;
			case 9:
				deletelastnode();
			break;
			case 10:
				printf("enter id\n");
				scanf("%d",&id);
				deletestudent(id);
			default: printf("select valid option\n");
		}
	}
}
void add_at_beginning(struct student s)

{
	struct student *ptr=(struct student*)malloc(1*sizeof(struct student));
	strcpy(ptr->name,s.name);
	ptr->id=s.id;
	ptr->percentage=s.percentage;
	ptr->bno=s.bno;
	ptr->d.date=s.d.date;
	ptr->d.month=s.d.month;
	ptr->d.year=s.d.year;
	ptr->link=head;
	head=ptr;
	printf("Student Name: %s\n Student ID: %d\n Student Percentage: %f\n Student Batch No: %d\n Student Date of Joining\n Date: %d\n Month: %d\n Year: %d\n",ptr->name,ptr->id,ptr->percentage,ptr->bno,ptr->d.date,ptr->d.month,ptr->d.year);
}
	
void delete_at_beginning()
{
	struct student *temp;
	temp=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	else
	{
		head=head->link;
		free(temp);
	}
}
	
void display()
{
	struct student *temp;
	temp=head;
	if(head==NULL)
	{
		printf("empty list\n");
		return;
	}
	while(temp!=NULL)
	{
		printf(" Student Name: %s\n Student ID: %d\n Student Percentage: %f\n Student Batch No: %d\n  Student Date of Joining\n Date: %d\n Month: %d\n Year: %d\n",temp->name,temp->id,temp->percentage,temp->bno,temp->d.date,temp->d.month,temp->d.year);
	temp=temp->link;
	}
}

int count_students()
{
	int total=0;
	struct student *temp;
	temp=head;
	if(head==NULL)
	{
		printf("empty list\n");
		return total;
	}
	while(temp!=NULL)
	{
		total++;
		temp=temp->link;
	}
	return total;
}

int search_id(int id)
{
	struct student *temp;
	temp=head;
	int count=0;
	if(head==NULL)
	{	
		printf("empty list\n");
		return count;
		
	}
	while(temp!=NULL)
	{
		count++;
		if(temp->id==id)
		{   
			printf(" Student Name: %s\n Student ID: %d\n Student Percentage: %f\n Student Batch No: %d\n  Student Date of Joining\n Date: %d\n Month: %d\n Year: %d\n",temp->name,temp->id,temp->percentage,temp->bno,temp->d.date,temp->d.month,temp->d.year);
			temp=temp->link;
			return count;
		}
		else
		{
			temp=temp->link;
			
		}
	}
	printf("details not found\n");
	return 0;
}

int search_name(char *sname)
{
	struct student *temp;
	temp=head;
	int count=0,cmp;
	if(head==NULL)
	{	
		printf("empty list\n");
		return 0;
		
	}
	while(temp!=NULL)
	{
		count++;
		cmp=strcmp(temp->name,sname);
		if(cmp==0)
		{   
			printf(" Student Name: %s\n Student ID: %d\n Student Percentage: %f\n Student Batch No: %d\n  Student Date of Joining\n Date: %d\n Month: %d\n Year: %d\n",temp->name,temp->id,temp->percentage,temp->bno,temp->d.date,temp->d.month,temp->d.year);
			temp=temp->link;
			return count;
		}
		else
		{
			temp=temp->link;
			
		}
	}
	printf("details not found\n");
	return 0;
}

void add_at_last(struct student s)
{
	struct student *temp;
	struct student *ptr=(struct student*)malloc(1*sizeof (struct student));
	strcpy(ptr->name,s.name);
	ptr->id=s.id;
	ptr->percentage=s.percentage;
	ptr->bno=s.bno;
	ptr->d.date=s.d.date;
	ptr->d.month=s.d.month;
	ptr->d.year=s.d.year;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
		return;
	}
	temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=ptr;
}

void delete_list()
{
	struct student *temp;
	if(head==NULL)
	{
		printf("list is emplty\n");
		return;
	}
	while(head!=NULL)
	{
		temp=head;
		head=head->link;
		free(temp);
	}
}

void deletelastnode()
{
	struct student *cur, *pre;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==NULL)
	{
		free(head);
		head=NULL;
		return;
	}
	cur=head->link;
	pre=head;
	while(cur->link!=NULL)
	{
		pre=cur;
		cur=cur->link;
		free(cur);
		pre->link=NULL;
	}
}

void deletestudent(int id)
{
	struct student *cur, *pre, *temp;
	if(head==NULL)
		{
		
			printf("list is empty\n");
			return;

		}
	if(head->id==id)
	{
		temp=head;
		head=head->link;
		free(temp);
		return;
	}
	cur=head->link;
	pre=head;
	while(cur!=NULL)
	{
		if(cur->id==id)
		{
			temp=cur;
			pre->link=cur->link;
			free(temp);
			return;
		}
		pre=cur;
		cur=cur->link;
	}
	printf("details not found\n");
}
