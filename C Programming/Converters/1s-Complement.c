#include<stdio.h>
#include<string.h>
int main()
{
	char binary[1000];  //declare string
	int i,j=0;
	printf("Input binary number : ");
	gets(binary);
	for(i=0;binary[i]!='\0';i++)
	{
		if((binary[i]>='a' && binary[i]<='z') || (binary[i]>='A' && binary[i]<='Z') || (binary[i]>='2' && binary[i]<='9'))
		{
			j++;
		}
		else if(binary[i]=='0')
			binary[i]='1';
		else if(binary[i]=='1')
		binary[i]='0';
	}
	if(j>0)
	{
		printf("error input");
	}
	else
	{
	printf("1'S Complement: ");
	puts(binary);
	}
}
