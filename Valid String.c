#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
  	 printf("enter the string:");
  	 scanf("%s",&a);
   	printf("RE-enter the string:");
   	 scanf("%s",&b);
   	 if(strcmp(a,b)==0)
   	 {
   	 	printf("valid");
	 }
		else
		{
			printf("invalid");
		}
   	
}