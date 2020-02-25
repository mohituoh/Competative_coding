#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a[]="bbad";
	int h=0;
	int l=strlen(a)-1;
	for(int i=0; i<=l;i++)
	{
			int j=l;
			int k=i;
			while(j>k)
			{
				if(a[k] != a[j--])
				{
					printf("not pallendrome");
					return ;
	
				}
			}
			l--;
		
	
	}

	printf(" pallendrome");
}