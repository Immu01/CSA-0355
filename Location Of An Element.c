#include<stdio.h>
int main()
{
	int n,search,a[100],i;
	printf("enter no of elements :\n");
	scanf("%d",&n);
	printf("enter %d elements :\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter a number to search :");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("\n%d is at location %d",search,i+1);
			break;
		}
	}
	if(a[i]!=search)
	{
		printf("\n%d is not there in an array",search);
	}
	return 0;
}
