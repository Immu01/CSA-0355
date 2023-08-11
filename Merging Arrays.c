#include<stdio.h>
int main()
{
	int a[100],b[100],m[100],i,n1,n2;
	printf("enter size of first array :");
	scanf("%d",&n1);
	printf("enter elements :\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter size of second array :");
	scanf("%d",&n2);
	printf("enter elements :\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1+n2;i++)
	{
		if(i<n1)		
		{
		m[i]=a[i];
		}
		else
		m[i]=b[i-n1];
	}
	printf("after merging :\n");	
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\t",m[i]);
	}
	return 0;
}
