#include<stdio.h>
#include<stdlib.h>
void main()
{
	int  count[130]={0};
	char a[104]={0};
	char b[104]={0};
	gets(a);
	printf("\n");
	gets(b);
	int i=0;
	while(a[i]!=NULL)
	{

		int c=a[i];
		count[c]=count[c]+1;

		i++;

	}

	int j=0;


	while(j!=130)
	{
		if(count[j]!=0)
		{
			printf("%c, %d",j,count[j]);
			printf("\n");
		}
		j++;	
		
	}
	int k=0;
	while(k!=104)
	{
		int t=b[k];

		if(count[t]==0)
		{
			
			printf("the extra character is - %c,",t);
			break;
		}
		k++;
	}
	



}