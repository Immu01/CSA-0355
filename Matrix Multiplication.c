#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k,m,n,sum=0;
	printf("enter element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("...............");
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
		sum=sum+mat1[i][k]*mat2[k][j];
		mat3[i][j]=sum;
			}
	}
}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat3[i][j]);
	}
			printf("\n");	
}
	return 0;
}
