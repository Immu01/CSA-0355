#include<stdio.h>
int main()
{
	int n,a[20],i;
	printf("enter no.of input:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even numbers:");
	for(i=0;i<=n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",i);
		}
	}
	printf("\nodd numbers:");
	for(i=1;i<=n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",i);
		}
	}
}
