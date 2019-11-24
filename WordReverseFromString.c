/*word reverse from string ..

Input string: I love programming.

Output:programming love I


*/

#include<stdio.h>
#include<string.h>
int main(){
	
	int i,j,startIndex,endIndex;
	char str[100];
	
	printf("Enter a Sentance :");
	gets(str);
	
	int len = strlen(str);
	
	endIndex=len-1;
	
	for(i=endIndex; i>=0; i--){
		
		if(str[i]==' ' || i==0){
			if(i==0)
			{
				startIndex=0;
			}
			else{
				startIndex=i+1;
			}
			for(j=startIndex ;j<=endIndex;j++){
				printf("%c",str[j]);
			}
			endIndex=i-1;
			printf(" ");
		}
		
	}
	
}
