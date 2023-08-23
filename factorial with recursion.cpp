#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	printf("the factorial of %d is:%d",a,fact(a));
}
