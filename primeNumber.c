//prime number Find...........

#include<stdio.h>

int main(){
	
	
	int n, i, count=0;
	printf("Enter Value  to To Check  Prime Or Not Prime Number :");
	scanf("%d",&n);
	
	for(i=2; i<n; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0){
		printf("%d is Prime Number ",n);
	}
	else{
		printf("%d is Not Prime Number ",n);
	}
	
	
	
	
	
	
}
