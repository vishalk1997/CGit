#include<stdio.h>
#include<string.h>
#include<stdlib.h> 


struct pass
{
	char name[32];
	char mobileNo[11];
	char username[11];
	char password[11];
	char source[20];
	char destination[20];
	int seats;
};
//struct pass p[20];
//struct pass *ptr=p;
void login(struct pass*, int*, int*);
int Register(struct pass*, int*, int*);
void display(struct pass*, int*);
int booking(struct pass*, int*, int*);


