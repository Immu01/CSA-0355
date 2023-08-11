#include<stdio.h>
int main()
{
	int  a=0,b=1,n,i=2,c;
	printf("enter the number:");
	scanf("%d",&n);
	printf("%d%d",a,b);
	while(i<n)
	{
		c=a+b;
		i++;
		printf("%d",c);
		a=b;
		b=c;
	}
	
}
