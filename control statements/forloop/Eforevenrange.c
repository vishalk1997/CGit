#include <stdio.h>
main()
{
int min,max,temp,x;

printf("enter min,max\n");
scanf("%d %d",&min,&max);
x=min%2;
printf("x%d\n",x);
if(x!=0)
min=++min;
printf("min %d\n",min);

for(temp=min; temp<=max; )
{
printf("%d\n", temp);
temp=temp+2;
}
}


