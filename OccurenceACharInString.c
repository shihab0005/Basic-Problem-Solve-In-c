/*Count All Occurrence of a Character in a String

Input string: I love programming. I love Codeforwin.
Input character to search: o
Output

'o' found at index: 3, 9, 23, 28, 32
*/
#include<stdio.h>
#include<string.h>
int main(){
	
	int i=0;
	char str[50],ch;
	
	printf("Enter Sentence :");
	gets(str);
	
	printf("Please Enter the Character that you want to Search for :");
	scanf("%c",&ch);
	
	
	while(str[i]!='\0'){
		if(str[i]==ch){
			printf("'%c' is found at index %d\n", ch, i+1);
		}
		i++;
	}
}
