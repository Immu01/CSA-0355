#include<stdio.h>
int main()
{
	int i,j,n,a[90];
	printf("enter the no.of input:");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements:");
	printf("before adding:");
		for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the inserting number at first:");
	printf("\nafter adding:");
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	scanf("%d",&a[0]);
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the inserting number at last:");
	printf("\nafter adding:");
	scanf("%d",&a[n+1]);
	for(i=0;i<n+2;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the inserting number 3rd pos:");
	printf("\nafter adding:");
	for(i=7-1;i>=3;i--)
	{
		a[i+1]=a[i];
	}
	scanf("%d",&a[3]);
	for(i=0;i<n+3;i++)
	{
		printf("%d\t",a[i]);
	}
}
