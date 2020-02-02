#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[32];
    unsigned int id;
    float salary;
    char gender;
    char grade;
};
void update(struct employee *, int );
void display(struct employee *, int );

void main(void)
{
	int n=2;
	struct employee * ptr;
	ptr = (struct employee *)malloc(n*sizeof (struct employee));
	
	//update(ptr,n);
    //display(ptr,n);
    printf("%d\n",sizeof(struct employee));
	free(ptr);
}

void update(struct employee *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
		{
			scanf("%s",ptr[i].name);
			__fpurge(stdin);
			scanf("%d",&ptr[i].id);
			__fpurge(stdin);
			scanf("%f",&ptr[i].salary);
			__fpurge(stdin);
			scanf("%c",&ptr[i].gender);
			__fpurge(stdin);
			scanf("%c",&ptr[i].grade);
			__fpurge(stdin);\
		}
}

void display(struct employee *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
		{
			printf("Name : %s\n",ptr[i].name);
			printf("ID : %d\n",ptr[i].id);
			printf("Salary: %f\n",ptr[i].salary);
			printf("Gender: %c\n",ptr[i].gender);
			printf("Grade: %c\n",ptr[i].grade);
		}
}

