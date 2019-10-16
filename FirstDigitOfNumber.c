/* C Program to Find First Digit Of a Number */

#include<stdio.h>
int main(){
	
	int number ,firstDigit;
	printf("Please Enter any Number that you wish  :");
	scanf("%d",&number);
	
	firstDigit =number;
	while(firstDigit >=10){
		firstDigit = firstDigit/10;
	}
	
	printf("First Digit Of your Given Value %d is = %d",number,firstDigit);
}
