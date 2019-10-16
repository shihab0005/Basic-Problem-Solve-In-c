//Print Prime Number Between 1 to 100;

#include<stdio.h>

int main()
{
	int i, start, end, j, count, m ,n=0;
	
	printf("Enter Starting Point :");
	scanf("%d",&start);
	printf("Enter Ending Point :");
	scanf("%d",&end);
	
	if(start<end)
	{
		for(i=start+1; i<=end; i++){
			m=i;
			count=0;
			for(j=2; j<m; j++){
				if(m%j==0){
					count=1;
					break;
				}
				
			}
			
			if(count==0){
				n=n+1;
				printf(" %d ",m);
				
			}
			
		}
		printf("\n total prime Number is =%d",n);
		
		
	
	}
	else{
		printf("Please Enter  Start is less than End !! ");
	}
		
}
	


