//find fibonacci ............/

#include<stdio.h>

int main(){
	
	int a=-1, b=1, c, i, n;
	
	printf("Enter Range To print fibonacci number :");
	scanf("%d" ,&n);
	
	for(i=1; i<=n; i++){
		c = a+b;
		printf(" %d ",c);
		a = b;
		b = c;
		
	}
}
