//This is a programme of covertion between binary and decimal number

#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c=0,i;
	
	printf("Please enter the binary number:");
	scanf("%d",&a);
	i=0;
	for(;a>0;)
	{
		b=a%10;
		a=a/10;
		c=b*pow(2,i)+c;
		i++;
	}
	printf("The decimal is:%d",c);
}
