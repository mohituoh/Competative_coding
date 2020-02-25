//by- Mohit Sharma
// University of Hyderabad


#include<stdio.h>
#include<stdlib.h>
void main()
{

	int a[]={1,5,10,15,20,25};
	int b[]={2,4,5,9,15};
	int result=0;
	int i=0;
	int j=0;
	int sum_a=0;
	int sum_b=0;

while(i!=6 && j!=5)
{
	while(a[i]!=b[j])
	{
		
		if(a[i]<b[j])
		{	
			sum_a=sum_a+a[i];
			i++;
		}
		else if(a[i]>b[j])
		{
			sum_b=sum_b+b[j];
			j++;

		}


	}
	if(sum_a>sum_b)
	{
		result=result+sum_a+a[i];
	}
	else
	{
		result=result+sum_b+b[j];
	}
	
	sum_a=0;
	sum_b=0;
	
	
	i++;
	j++;
	
	if(j==5 && i!=5)
	{
		while(i!=6)
		{
		result=result+a[i];
		i++;
		}

		

	}
	else if(j!=5 && i==5)
	{
		while(j!=6)
		{
		result=result+a[j];
		j++;
		}
	}


}


printf("The maximum sum of array is - %d",result);


}