/**
 * C program to toggle case of each character in a string
 */
 #include<stdio.h>
 int main()
 {
 	 int i;
 	 char str[100];
 	 printf("Enter Mixed UpperCase And LowerCase :");
     gets(str);
 	
 	 printf("String Before Toggling Case: %s", str);
 	 for(i=0;str[i]!='\0';i++)
 	 {
 	 	if(str[i]>='a' && str[i]<='z')
 	 	{
 	 		str[i]=str[i]-32;
		  }
		  else if(str[i]>='A' && str[i]<='Z')
		  {
		  	str[i]=str[i]+32;
		  
		  }
	  }
	   printf("\nString After Toggling Case: %s", str);
 	
 }
