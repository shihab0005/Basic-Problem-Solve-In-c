/** 
 * C program to convert string to uppercase
 */
 #include<stdio.h>
 
 int main()
 {
 	char str[100];
 	int i;
 	printf("Enter LowerCase String : ");
 	gets(str);
 	
 	for(i=0; str[i];i++)
 	{
 		if(str[i]>='a' && str[i]<='z')
 		{
 			str[i]=str[i]-32;
		 }
	 }
	 printf("UpperCase String : %s",str);
 }
