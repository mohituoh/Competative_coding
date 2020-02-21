#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[]={10,5,6,3,20,100,80};
	int i=0;
	int j=0;
	int p=0;
	for(int k=1;k<7;k++)
	{
		if(p==0)
		{
			if(a[i]>=a[k])
			{
				p=1;
				i++;
			}
			else
			{
				int swap=a[i];
				a[i]=a[k];
				a[k]=swap;
				i++;
				p=1;


			}
		}
		else
		{
			if(a[i]<a[k])
			{
				i++;
				p=0;
			}
			else
			{
				int swap=a[i];
				a[i]=a[k];
				a[k]=swap;
				i++;
				p=0;

			}


		}


	}

	for(int j=0;j<7;j++)
	{
		printf("%d , ",a[j]);
		
	}


}