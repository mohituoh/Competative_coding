#include<stdio.h>
#include<stdlib.h>
void main()
{
	char name[50];
	FILE* fp;
	printf("Enter Name of file");
	gets(name);
	//printf("%s",name);
	if(fp=fopen(name,"r"))
	{
		fclose(fp);
		printf("1");
	
	}
	else
	{
		printf("0");
		return 0;
	}
	//char s = 'text1';
	//check_file_Exist()




}