//Program of Fibonacci Series with Recursion in C ............

#include<stdio.h>
#include<conio.h>

int main(){
	int fibo(int);
	
	int i, n, f;

	printf("Enter Range To print :");
	scanf("%d ",&n);
	
	for(i=0; i<=n; i++)
		f=fibo(i);
		printf("%d ",f);
}
int fibo(int n){
	if(n==0 || n==1)
		return n;
	
	else
		return (fibo(n-2)+fibo(n-1));
	
}
