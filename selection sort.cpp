#include<stdio.h>
main()
{
	int a[10],i,j,n,pos,temp;
	printf("enter no of elements for array:");
	scanf("%d",&n);
	printf("enter elements for array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
			}
			if(pos!=i)
			{
				temp=a[i];
				a[i]=a[pos];
				a[pos]=temp;
			}
		}
	}
	printf("\n the sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
