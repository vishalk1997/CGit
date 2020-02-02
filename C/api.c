#include"blackbus.h" 
extern int total;
extern int count;
extern int *tptr;
extern int *cptr;
extern struct pass p[20];
extern struct pass *ptr;

extern int x;

void login(struct pass *ptr, int *cptr, int *tptr)
{   
	int r,b;
    int P,u,i,j,selection;
	r=*cptr;
    char user[10];
	char pass[10];
	LOGIN:printf("enter username\n");
    scanf("%s",user);
	__fpurge(stdin);
    printf("enter password\n");
	scanf("%s",pass);
	__fpurge(stdin);
    //strcpy(buser,ptr[l].username);
	//strcpy(bpass,ptr[l].password);
	//printf("%s,%s",buser,bpass);
    for(i=0;i<=*cptr;i++)
  	{
		u=strcmp( user,ptr[i].username);
        P=strcmp( pass,ptr[i].password);
		//printf("%d %d\n",u,P);
		if((u==0)&&(P==0))
		break;
	}
    b=i;
	if((u==0)&&(P==0))
	{	
			BOOK:printf("press 1 for booking 2 for display booked tickets 0 for logout\n");
            scanf("%d",&selection);
			switch(selection)
			{   
				case 0:
					
					break;				
				case 1:
					*tptr=booking(p,&total,&count);
				break;
				case 2:
					display(p,&count);
					goto BOOK;
				default:
					printf("enter correct input\n");
			}
		
		
	}
	else 
	{
		/*for(j=0;j<3;j++)
		{
			printf("Please enter valid credentials\n");
			goto LOGIN;
		}					
		*/	
        
		printf("No details found\n");
		printf("please register for login\n");
	}
			
		
	
}
int Register(struct pass *ptr, int *cptr,int *tptr)
{   
	//printf("%d,%d\n",*cptr,*tptr);
    int r;
    int tickets;
    char username[11];
    tickets=20-(*tptr);
    printf("%d tickets left\n",tickets);
	if((*cptr<20)||(*tptr<20))
	{
		int v,passlen,numlen,i,c;
	    char pass[10];
		//char n,m;
		r=*cptr;
	    printf("enter details for registration\n");
	    printf("enter name\n");
		scanf("%s",ptr[r].name);
		__fpurge(stdin);
		MSCAN:printf("enter mobile number\n");
			scanf("%s",ptr[r].mobileNo);
			__fpurge(stdin);
			numlen=strlen(ptr[r].mobileNo);
			
		if((numlen<10)||(numlen>10))
		{   
			printf("enter valid mobile number\n");
			goto MSCAN;
		}
		 
		
		for(c=0; ptr[r].mobileNo[c]!='\0' ;c++)
		{  
			if((ptr[r].mobileNo[c]>57) || (ptr[r].mobileNo[c]<48))
			{			
				printf("enter valid mobile number\n");
				goto MSCAN;
				//break;
			}
		}
			
		if((ptr[r].mobileNo[0]!='9')&&(ptr[r].mobileNo[0]!='8')&&(ptr[r].mobileNo[0]!='7')&&(ptr[r].mobileNo[0]!='6'))
			{
				printf("%c\n",ptr[r].mobileNo[0]);
				printf("enter valid mobile number\n");
				goto MSCAN;
			}
		USER: printf("enter username\n");
        if(*cptr>0)
		{
			scanf("%s",username);
			__fpurge(stdin);
			for(i=0;i<=*cptr;i++)
			{
				c=strcmp(username,ptr[i].username);
				if(c==0)
				{
					printf("username alredy existed please enter new username\n");
					goto USER;	
				}
				else
				{		
					strcpy(ptr[r].username,username);
					break;
				}
			}
		}
		else
		{
			scanf("%s",ptr[r].username);
			__fpurge(stdin);
		}
		
		SCAN:printf("enter password\n");
			 scanf("%s",pass);
			__fpurge(stdin);
        	passlen=strlen(pass);
        if((passlen<4)||(passlen>10))
		{
			printf("Password must be grater than 4 characters and less than 11 characters\n");
			goto SCAN;
		}
		else
		{
			printf("re enter password\n");
			scanf("%s",ptr[r].password);
			__fpurge(stdin);
		    v=strcmp(pass,ptr[r].password);
		   		// printf("%s\n",pass);
		    if(v==0)
			{	
		    	printf("please re login to complete registration\n");
				login(p,&count,&total);
		    	
			}
		    else
			{
				printf("given password is wrong\n re enter correct details\n");
				goto SCAN;
			}	
	
			(*cptr)++;
		}
	}
	else
	printf("registations completed\n");
	return *cptr;
}

int booking(struct pass *ptr, int *tptr, int *cptr )
{  
	int tickets,b;
    tickets=20-(*tptr);
	printf("%d tickets left\n",tickets);
	b=*cptr;
    if((*tptr)<20)
	{
    	int i;
		printf("enter pickup location\n");
		scanf("%s",ptr[b].source);
    	__fpurge(stdin);
		printf("enter destination\n");
		scanf("%s",ptr[b].destination);
		__fpurge(stdin);
	    printf("select no of seats\n");
	    scanf("%d",&ptr[b].seats);
		__fpurge(stdin);
		printf("booking is completed succesfully\n");
		//display(p,&count);
		printf("  Name: %s\n",ptr[b].name);
		printf("  No of Seats: %d\n",ptr[b].seats);
		printf("  Registered Mobile No: %s\n",ptr[b].mobileNo);
		printf("  Pickup Point: %s\n",ptr[b].source);
		printf("  Destination: %s\n",ptr[b].destination);

		for(i=0;i<ptr[b].seats;i++)
			{
		    	printf("Ticket number %d\n", x);
		        x++;
			}
		*tptr=(*tptr)+ptr[b].seats;
	}
	else
	printf("Bookings completed\n");
    
return *tptr;
}
void display(struct pass *ptr,int *cptr)
{   int d,i=1,l;
	for(d=0;d<=(*cptr-1);d++)
	{	
		printf("%d Name: %s\n",i,ptr[d].name);
		printf("  No of Seats: %d\n",ptr[d].seats);
		printf("  Registered Mobile No: %s\n",ptr[d].mobileNo);
		printf("  Pickup Point: %s\n",ptr[d].source);
		printf("  Destination: %s\n",ptr[d].destination);

		i++;
		//printf("%s\n",ptr[d].username);
		//printf("%s\n",ptr[d].password);
	}
}
