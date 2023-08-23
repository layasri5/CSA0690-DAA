#include<stdio.h>
main()
{
	int arr[10],first,last,mid,flag=0,n,k,pos;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("\n enter elemets for array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	first=0;
	last=n-1;
	printf("enter value to be searched:");
	scanf("%d",&k);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==k)
		{
			flag=1;
			pos=mid;
			break;
		}
		else if(arr[mid]<k)
		{
			first=mid+1;
		}
		else if(arr[mid]>k)6j
		{
			last=mid-1;
		}
	}
	if(flag==1)
	{
		printf("the value is found at position %d",pos);
	}
	else
	{
		printf("the value is not found");
	}
}
