//palindrom integer ///

#include<stdio.h>

int  main(){
	
	int rem, sum=0, num , temp;
	 
	 printf("Enter Number to check Palindrom Or Not :");
	 scanf("%d",&num);
	 
	 temp=num;
	 
	 while(temp !=0){
	 	rem = temp %10;
	 	sum = sum*10+rem;
	 	temp = temp/10;
	 }
	 
	 printf(" Your Inter number %d is reverse by : %d",sum,sum);
	 if(num==sum){
	 	printf("\n %d== %d so this Number is palindrom !",num,sum);
	 }
	 else{
	 	printf("\n %d != %d so this Number is Not palindrom !",num,sum);
	 }
	 
}
