//sum of digits in c programming..........

#include<stdio.h>

int main(){
	
	int rem, sum, num;
	
	printf("Enter Some digits To Sum :");
	scanf("%d",&num);
	int temp =num;
	while(temp !=0){
		rem = temp%10;
		sum= sum+rem;
		temp =temp/10;
	}
	printf("Sum of Given %d digits are = %d",num,sum);
}
