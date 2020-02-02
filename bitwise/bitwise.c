#include<stdio.h>

void main(void)
{
	unsigned int a=10, b=20, c;
	c= a&b;
	printf("%x\n",c);
	c=a|b;
	printf("%x\n",c);
	c=a^b;
	printf("%x\n",c);
	c=~a;
	printf("%x\n",c);
	c=~b;
	printf("%x\n",c);
	
}
