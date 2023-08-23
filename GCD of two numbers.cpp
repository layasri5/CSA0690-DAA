#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,temp=0;
	printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
    	temp=b;
    	b=a%b;
    	a=temp;
	}
	printf("the GCD is:%d",a);
}
