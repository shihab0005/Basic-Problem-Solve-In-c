//Program to calculate LCM of two numbers in C language...

#include<stdio.h>

int main(){
	
	int n1, n2, i;
	
	printf("Enter 1st Number to calculate LCM :");
	scanf("%d",&n1);
	
	printf("Enter 2st Number to calculate LCM :");
	scanf("%d",&n2);
	
	for(i = n1>n2?n1:n2; i<=n1*n2; i++){
		if(i%n1==0 && i%n2==0){
			break ;
		}
	}
	printf(" LCM of %d And %d is = %d ",n1,n2,i);
	
	
}
