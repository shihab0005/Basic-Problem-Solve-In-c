/* C Program to find Perfect Number using For Loop */

#include<stdio.h>
int main()
{
	int i,number,sum=0;
	printf("Enter Number to check Perfect or Not  :");
	scanf("%d",&number);
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==number)
	{
		printf("%d is Perfect Number.",number);
	}
	else{
		printf("%d is Not Perfect Number.",number);
	}
}
