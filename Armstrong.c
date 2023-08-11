#include<stdio.h>
int main()
{
	int num=0,n,s=0,r;
	printf("enter the number:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		r=num%10;
		s=s+r*r*r;
		num=num/10;
	}
	if(s==n)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}