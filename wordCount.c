#include <stdio.h>
#include <string.h>
 
void main()
{
    int i,count=0;
    
    char word[50];
    printf("Enter A String :");
    gets(word);
    
    while(word[i]!='\0'){
    	
    	if(( word[i]== ' '&& word[i+1] !=' ') || word[i]=='\n' || word[i]=='\t'){
    		count++;
		}
		i++;
	}
	printf("There are %d words in your given String .",count+1);
}
