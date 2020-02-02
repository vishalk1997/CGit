#include<stdio.h>
void main(void)
{
	int num,temp,rem,d,j=1,dec=0;
	printf("enter number\n");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
		{
			rem=temp%10;
			d=rem*j;
			dec=dec+d;
			j=j*2;
			temp=temp/10;
		}
	printf("%d\n",dec);
}
