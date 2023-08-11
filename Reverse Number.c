#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("reverse a nnumber:%d",s);
}
