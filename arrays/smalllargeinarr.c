#include<stdio.h>
void main(void)
{
	int arr[5]={1,2,3,4,5},small,large,i;
	small=large=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<small)
			small=arr[i];

		if(arr[i]>large)
			large=arr[i];
	}
	printf("small=%d,large=%d",small,large);
}

