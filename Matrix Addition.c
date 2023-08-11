#include<stdio.h>
int main()
{
	int i,j,k,mat1[10][10],mat2[10][10],mat3[10][10],sum;
	printf("enter the elements of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the elements of sec matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+mat1[i][k]+mat2[k][j];
				mat3[i][j]=sum;
			}
		}
	}
		printf("matrix addition:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	
}
