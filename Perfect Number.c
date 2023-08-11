#include<stdio.h>
int main()
{
	int n,d,s,i,t;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	for(i=1;i<n;i++)
	{
		d=n%i;
		if(d==0)
		{
			s=s+i;
		}
	}
	if(t==s)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
}