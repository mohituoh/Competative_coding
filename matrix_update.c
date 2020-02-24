#include<stdlib.h>
#include<stdio.h>
void main()
{
int a[104][104]={0};
int b[104][104]={0};

for(int i=0;i<=2;i++)
{
	for(int j=0;j<=3;j++)
	{
		scanf("%d",&a[i][j]);
		
		
	}


}




for(int i=0;i<=2;i++)
{

	for(int j=0;j<=3;j++)
	{	int p;
		int q;
		if(a[i][j]==1)
		{
			p=i;
			q=j;
		}
		for(int k=0;k<=3;k++)
		{
			b[p][k]=1;
		}
		for(int l=0;l<=2;l++)
		{
			b[l][q]=1;
		}
	}


}

for(int i=0;i<=2;i++)
{
	for(int j=0;j<=3;j++)
	{
		printf("%d",b[i][j]);
		
		
	}
	printf("\n");


}







}