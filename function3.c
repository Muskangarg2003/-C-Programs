//program to calculate simple interest on bank balance for 1 year
#include<stdio.h>
float balance(void);
main()
{
	float interest,t;
	t=balance(); //function call
	if(t>50000.0f)
	{
		interest=t*0.08; //8 percent simple interset
	}
	else
	{
		interest=t*0.06;//6 percent simple interset

	}
	printf("simple interset for one year on amount %.2f=%.2f",t,interest);
	return 0;
}
float balance(void)
{
	float balance;
	printf("\nenter the cureent bank balance:");
	scanf("%f",&balance);
	return(balance);
}
