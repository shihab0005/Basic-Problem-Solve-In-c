/* C Program to Find Frequency of each Character in a String 
Input

Input string: Codeforwin
Output

Frequency of all characters in the given string:
'c' = 1
'd' = 1
'e' = 1
'f' = 1
'i' = 1
'n' = 1
'o' = 2
'r' = 1
'w' = 1

*/

#include<stdio.h>
int main(){
	 int i;
	 char str[100];
	 int freq[256]={0};
	 printf("Enter String TO find Frequency of all Character :");
	 gets(str);
	 
	 for(i=0; str[i];i++){
	 	freq[str[i]]++;
	 }
	 
	 for(i=0; i<256;i++){
	 	if(freq[i]!=0){
	 		printf("'%c' ---> %d  \n", i, freq[i]);
		 }
	 }
}
