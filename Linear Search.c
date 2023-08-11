#include<stdio.h>
int main()
{
	int a[20],n,i,p;
	printf("enter the no.of input");
	scanf("%d",&n);
	printf("enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the needed number:");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		{
		printf("%d number exists in array",p);
		break;
		}
	}
		if(a[i]!=p)
		{
		printf("%d number not exists in array",p);
		}
}
