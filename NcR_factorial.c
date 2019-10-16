/* C Program to Find NCR Factorial of a Number */

#include<stdio.h>
int cal_Fact(int  number);
int main(){
	
	int n,r ,ncr;
	printf("Please Enter the Values for N and R: \n");
    scanf("%d %d", &n, &r);
    
    ncr = cal_Fact(n)/(cal_Fact(n-r) * cal_Fact(r));
    printf("NCR Factorial Of %d and %d is = %d",n,r,ncr);

}

int cal_Fact( int number){
	int i,factorial =1;
	for(i=1;i<=number;i++){
		factorial = factorial*i;
	}
	return factorial;
}
