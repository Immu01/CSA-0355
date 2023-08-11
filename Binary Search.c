#include<stdio.h>
int main()
{
	int a[30],i,n,s,low,high,middle,j,temp=0;
	printf("enter the range:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search:");
	scanf("%d",&s);
	low=0;
	high=n-1;
	middle=(low+high)/2;
	for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    printf("\nAscending order....\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
	while(low<=high)
	{
		if(a[middle]<s)
			low=middle+1;
		else if(a[middle]==s)
		{
			printf("\nelement is at :%d",middle+1);
			break;
		}
		else
			high=middle-1;
			middle=(low+high)/2;
	}
}
