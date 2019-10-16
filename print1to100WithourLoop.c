//Sample C Program to Print 1 to 100 without Loop

#include<stdio.h>

int main(){
	int num =1;
	print(num);
	
}

int print(int number){
	if(number<=100){
		printf("%d ",number);
		print(number+1);
	}
}
