#include"blackbus.h"
int total=0,count=0;
int *tptr=&total;
int *cptr=&count;
struct pass p[20];
struct pass *ptr=p;

int x=87654321;

int main()
{   
	while(1)
	{
		int selection;
		printf("Select the option\n");
		printf("0- Exit 1- Login 2- Register 3- Display booked tickets\n");
    	scanf("%d",&selection);
    	
 		switch(selection)
		{
			case 0:
				exit(0);
			break;
			case 1:
				login(p,&count,&total);
			break;
			case 2:
				{
					*cptr=Register(p,&count,&total);
					
				}
			break;
			case 3:
				display(p,&count);
			break;
    	    default:
				printf("enter valid option\n");
		}
	}
    
}



