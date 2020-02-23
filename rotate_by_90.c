#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n=3;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={0};
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{	
			b[j][i]=a[i][k];


			k++;
		}
		printf("\n");
		k=0;
	}	
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

printf("\n");
printf("matrix after 90 degree rotation is - \n");

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
		
	



}