//Find GCD or HCF AND LCM..//

#include<stdio.h>
int main()
{
	int a1,a2,n1,n2,gcd,lcm;
	printf("Enter 1st Number :");
	scanf("%d",&a1);
	printf("Enter 2nd Number :");
	scanf("%d",&a2);
	n1=a1;
	n2=a2;
	while(n1 != n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
	}
	gcd=n1;
	
	printf("Gratest Common Divisr of %d and %d is :%d\n",a1,a2,gcd);
	lcm=(a1*a2)/gcd;
	printf("Least Common Multiple of %d and %d is  :%d",a1,a2,lcm);
}
