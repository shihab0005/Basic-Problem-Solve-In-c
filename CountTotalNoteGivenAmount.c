/* C Program to Count Total Notes in a Given Amount */

#include<stdio.h>

int main(){
	
	int a[9]={1000,500,100,50,20,10,5,2,1};
	int i,amount,temp;
	
	printf("Enter The Amount of Cash :");
	scanf("%d",&amount);
	temp =amount;
	for(i=0;i<9;i++){
		printf("\n %d Notes is =%d",a[i],temp/a[i]);
		temp =temp %a[i];
	}
}
