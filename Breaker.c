//Breaker in c programming ...

#include<stdio.h>

int main(){
	
	int i,n;
	printf("Enter Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
