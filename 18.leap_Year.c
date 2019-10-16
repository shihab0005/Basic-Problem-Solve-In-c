// Leap Year check in c ...........

#include<stdio.h>

int main(){
	
	int year;
	
	printf("Enter Year To Check Leap Year or NOt : ");
	scanf("%d",&year);
	
	if(year%400==0 || (year%4==0 && year%100!=0))
	{
		printf("Your Entered Year %d is Leap Year !!",year);
	}
	
	else
	{
		
		printf("Your Entered Year %d is Not Leap Year !!",year);
	}
}
