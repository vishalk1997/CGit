#include<stdio.h>
int count(int);
main()
{
  int ip,temp=1,i,j,rem,c;
 char y[c],x;
printf("enter integer value\n");
scanf("%d",&ip);
c= count(ip);
printf("count: %d\n",c);

 temp=ip;
for (i=0;i<c;i++)
{
 rem=temp%10;
 temp=temp/10;  
 x=rem+48;
printf("%c\n",x);
j=c-1-i;
y[j]=x;
}
y[i]='\0';
 printf("%s\n",y);
}

int count(ip)
{int i,c=0;
int temp=ip;
for(i=0;temp>0;i++)
{ 
c++;
  temp=temp/10;
 }
return c;
}
