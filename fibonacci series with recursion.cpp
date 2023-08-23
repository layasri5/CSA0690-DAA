 #include<stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
main()
{
	int n,i;
	printf("\n enter no of numbers to be printed:");
	scanf("%d",&n);
	printf("\n the fibonacci series is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
}
