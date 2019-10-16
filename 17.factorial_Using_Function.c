//factorial using recursion .....

#include<stdio.h>

int main(){
	int n, factorial;
	
	printf("Enter value to find Factorial :");
	scanf("%d",&n);
	
	factorial = fact(n);
	
	printf("Factorial of %d is = %d",n,factorial);
}

int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
