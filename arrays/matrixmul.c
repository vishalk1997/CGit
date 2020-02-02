#include<stdio.h>
#define ROW 3
#define COL 3
void main(void)
{
	int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
	printf("enter matrix1\n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&mat1[i][j]);
	printf("enter matrix2\n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&mat2[i][j]);

	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<COL;k++)
				mat3[i][j]+=mat1[i][j]+mat2[i][j];
		}

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%5d",mat3[i][j]);
		printf("\n");
	}
}

