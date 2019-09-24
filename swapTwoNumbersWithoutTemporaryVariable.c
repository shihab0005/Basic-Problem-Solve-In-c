//swap two numbers without temporary variable


#include<stdio.h>

int main(){
	
	int n1, n2;
	printf("Enter 1st Number  :");
	scanf("%d",&n1);
	
	printf("Enter 2st Number  :");
	scanf("%d",&n2);
	
	printf("Before Swap The 2 Numbers Are :");
	printf("\nA = %d",n1);
	printf("\nB = %d",n2);
	
	n1 = n1-n2;
	n2 =n1+n2;
	n1 =n2-n1;
	
	printf("\nAfter Swap The 2 Numbers Are :");
	printf("\nA = %d",n1);
	printf("\nB = %d",n2);
	
}
