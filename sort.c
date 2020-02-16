#include<stdio.h>
#include<stdlib.h>
void main()
{
	int count[3]={0};
	int n;
	
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[104];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	

	for(int i=0;i<n;i++)
	{
		int x=a[i];
		count[x]=count[x]+1;
	}


	int s=0;
	int p=0;


    for(int i=0;i<3;i++)
	{


		int t=count[i];

		t=s+t;
		for( s;s<t;s++)
		{
			a[s]=i;	
			printf("%d",a[s]);

	
		}
	
	}

	



}