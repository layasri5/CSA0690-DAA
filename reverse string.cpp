#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int i,n;
	printf("enter a string:");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}
	printf("the reverse string is:%s",b);
}
