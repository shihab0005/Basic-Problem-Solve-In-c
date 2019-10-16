//Program to print all Armstrong numbers under 1000 in C language.....

#include<stdio.h>

int main(){
	
	int i, num ,sum ,rem ,temp;
	
	printf("Enter Range To Print Armstrong Number :");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		sum=0;
		temp=i;
		while(temp !=0){
			rem =temp%10;
			sum =sum+rem*rem*rem;
			temp =temp/10;
		}
		if(i==sum){
			printf(" %d ",i);
		}
		
	} 
}
