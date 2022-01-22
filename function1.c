#include<stdio.h>
long int factorial(int);       //function declaration
main()
{
	int num;
	long int k;
	printf("enter a number whose factorial you want to calculate:");
	scanf("%d",&num);
	k= factorial(num); //function call
	printf("\nFACTORIAL=%ld",k);
	return 0;
}
long int factorial(int x)        //function defination
{
	int i=1;
    long int fact=1;
    for(i=x;i>=1;i--)
    {
    fact=fact*i;	
	} 
	return(fact);
}
	
	
	
