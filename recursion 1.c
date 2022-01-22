//to calculate factorial using recursion
#include<stdio.h>
int factorial(int);
main()
{
	int x,f;
	printf("enter a number whose factorial to be determined:");
	scanf("%d",&x);
	f=factorial(x);
	printf("factorial=%d",f);
	return 0;
}
int factorial(int num)
{
	int fact=1;
	if(num==0)
	   return(1);
	else
	{
		fact=num*factorial(num-1);
		return(fact);
	}   
}
