#include<stdlib.h>
#include<stdio.h>
void main()
{
char a[][25]={"mohit ","roshan","sandeep","sathwik"};
char s[125];
gets(s);
int i=0;
int p=0;
int count=0;
int max=0;
int r;
int s;
while(1)
{	

	
	if(s[i]==' ' || s[i]==NULL)
	{
		count++;
		if(p>max)
		{
			r=count;
			max=p;
			printf("this is max  value%d",max);		
		}
		p=0;
	}
	else
	{
		p++;
	}
	
	if(s[i]==NULL)
	{
		break;
	}
	i++;
}

printf("max world length is - %d",max);







}