
/* C Program to Find First and Last Digit Of a Number */

#include<stdio.h>
#include<math.h>

int main()
{
	int number,firstDigit,lastDigit,count=0;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	count = log10(number);
	
	firstDigit=number/ pow(10,count);  
	
	lastDigit=number%10;
	
	printf("Frist Digit =%d\n",firstDigit);
	printf("Last Digit =%d",lastDigit);
	
}

