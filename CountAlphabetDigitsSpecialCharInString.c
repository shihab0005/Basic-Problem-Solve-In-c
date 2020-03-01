/**
 * C program to count total number of alphabets, digits 
 * and special characters in a string
 */
 #include<stdio.h>
 int main()
 {
 	int i,Alphabet= 0, Digit= 0, Special= 0;
 	char str[100];
 	printf("Enter String :");
 	gets(str);
 	
 	for(i=0;str[i];i++)
 	{
 		if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) 
 		{
 			Alphabet++;
		 }
		 
		else if(str[i]>='0'&& str[i]<='9') 
		{
			Digit++;
		}
		else
		{
			Special++;
		}
	 }
	 printf("Alphabets =%d\n",Alphabet);
	  printf("Digits =%d\n",Digit);
	   printf("Specials =%d\n",Special);
	 
	 
 		
    
 }
