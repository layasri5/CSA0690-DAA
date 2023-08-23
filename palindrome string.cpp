#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int i,n,flag=0;
	printf("enter a string:");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("the string is not palindrome");
	}
	else
	{
		printf("the string is palindrome");
	}
}
