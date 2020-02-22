#include<stdio.h>

int j;
		char str[200];

remove_dup(char str[],int i)
{

		if(str[i]=='\0')
		{
			return;
		}
		i++;	

		remove_dup(str,i);

		if(str[i]==str[i-1])
		{
			
			for(int j=i;str[j]!='\0';j++)
			{
				str[j-1]=str[j];

			}
			str[j]=='p';
		}



}


int main()
{


		gets(str);

	
	remove_dup(str,0);

		printf("%s",str);




}