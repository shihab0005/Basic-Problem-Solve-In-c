//prefect number Between 1 to N//
#include<stdio.h>
int main()
{
	int j,i,number,sum;
	printf("Enter Number to check Perfect or Not  :");
	scanf("%d",&number);
	for(j=1;j<=number;j++)
	{ 
	    sum=0;
	 for(i=1;i<j;i++)
	 
	   {
		if(j%i==0)
		{
			sum=sum+i;
		}
       }
	    if(sum==j)
     	{
		printf("%d ",j);
	    }
	}
	
}
