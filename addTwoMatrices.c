//add two matrices.................

#include<stdio.h>

int main(){
	
	int a[3][3], b[3][3], c[3][3], i, j;
	
	printf("Enter 9 number for 1st matrix :\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter 9 number for 2st matrix :\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum Of two Matrix Are : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			c[i][j] = a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}
