#include<stdio.h>
main()
{
	int i,j,n,flag=1;
	printf("\n enter limit:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("%d\t",i);
		}
	}
	
}
