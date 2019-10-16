//Fibonacci series using array.......

#include<Stdio.h>

int main(){
	
	int i ,n ;
		
	printf("Insert Range To print Fibonacci Series :");
	scanf("%d",&n);
int arr[n];
	
	arr[0]=0;
	arr[1]=1;
	
	for(i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	} 
	printf("\nfibonacci Series : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
