#include<stdio.h>
#include<stdlib.h>
add(int x)
{
	if(x==0)
	{
		return 0;
	}

	
	return(x%10 + add(x/10));



}



void main()
{
	int x=123456;
	int t=add(x);
	printf("%d",t);


}