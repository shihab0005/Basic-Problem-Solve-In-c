#include<stdio.h>

int main(){
	
	int N,Hr=0,Min=0,Sec=0;
	
	scanf("%d",&N);
	Hr = N/3600;
	N = N%3600;
	Min =N/60;
	Sec = N%60;
	
	printf("%d:%d:%d\n",Hr,Min,Sec);
}
