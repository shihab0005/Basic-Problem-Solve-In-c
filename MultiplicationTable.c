// C Program to Print Multiplication Table 

#include<stdio.h>

int main(){
	
	int i,j,n;
	printf("Enter Range To Print Multiplication Table :");
	scanf("%d",&n);
	printf("Print Multiplication Table (1 to %d)\n",n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			printf("%d X %d = %d\n",i,j,i*j);
		}
		printf("\n ==========\n");
	}
}
