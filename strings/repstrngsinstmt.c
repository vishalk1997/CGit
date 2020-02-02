#include<stdio.h>
#include<string.h>
main()
{
  char a[50]="a for apple a for ant a for app";
  char b[20];
  char t[20];
  char buff[10]="          ";
  int i=0,j=0,k=0,x,v,count=0,l,l2;
 
for(i;a[i]!='\0';i=i+l+1)
{
  for(j,v=0;((a[j]!=' ')&&(a[j]!='\0'));j++,v++)
    {
	b[v]=a[j];
     }
  b[v]='\0';
  printf("%s\n",b);
  j++;
  l=strlen(b);
//printf("j=%d\n",j);
//printf("v=%d\n",v);

	for(count=1,k=i+l+1;a[k]!='\0'; )
	{
     
	 x=strncmp(b,&a[k],l);
	 if(x==0)
  	  {
    	  count++;
    	  k=k+l;
 
    	}
      
 	else
     	k++;
	}
printf("%s-%d\n\n",b,count);
}

}
