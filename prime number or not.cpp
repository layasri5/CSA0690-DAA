#include<stdio.h>
main()
{
	int a,i,flag=0;
	printf("enter a number:");
	scanf("%d",&a);
	if(a==0 ||a==1)
	{
	    flag=1;
	}
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("\n %d is a prime number",a);
	}
	else
	{
		printf("\n %d is not prime number",a);
	}
}
