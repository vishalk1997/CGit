#include<stdio.h>
void main(void)
{
	unsigned int x=0xb, mask=1, set, clear, toggle;
	set=x|mask;
	clear=x&(~mask);
	toggle=x^mask;
	printf("set=%x\nclear=%x\ntoggle=%x\n",set,clear,toggle);
}
