#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
	system("color 5F"); //used to change the color of back screen by changing no.
	int pin=123,opt,enterpin,count=0,amount=1;
	float balance=2000;
	int transaction=1;
	
	
	time_t now;
	time(&now);
     printf("\n\t\t\t%s",ctime(&now));
     
     printf("\n\t***************** WELCOME TO THE PROGRAM *****************");
     
     while(pin!=enterpin)
     {
     	printf("\n\t Please enter your pin");
     	scanf("%d",&enterpin);
     	if(enterpin!=pin)
     	{
     		Beep(610,2500);
     		printf("\t ##### invalid pin ####\n");
		 }
		 count++;
		 if(count==3&&pin!=enterpin)
		 {
		 	
		 	printf("\n\t\t\t PLEASE CHECK UR PIN");
		 	exit(0);
		 }
	 }
	 
	 while(transaction!=0)
	 {
	 	printf("\n\t************** AVAILABLE TRANSACTIONS ****************");
	 	printf("\n\t enter 1 for withdraw");
	 	printf("\n\t enter 2 for deposit");
	 	printf("\n\t enter 3 to check balance");
	 	printf("\n\t------------ select the opton------------");
	 	scanf("%d",&opt);
	 	
	 	if(opt==1)
	 	{
	 		while(amount%500!=0)
	 		{
	 			printf("\n\t enter the amount you want to withdraw");
	 			scanf("%d",&amount);
	 			if(amount%500!=0)
	 			{
	 				printf("\tamount should be multiple of 500\n");
				}	
			}
			 
			 if(balance<amount)
			 {
			 	printf("\n\t############## INSUFFICIENT BALANCE ##############");
			 	exit(0);
			 }
			 else
			 {
			 	balance=balance-amount;
			 	printf("\n\t You have withdraw Rs. %d and your new balance %f",amount,balance);
			 	amount=1;
			 	break;
			 }	 
     	
	 }
	 
	 else if(opt==2)
	 {
	 	printf("\n\t Enter amount you want to deposit");
	 	scanf("%d",&amount);
	 	balance=balance+amount;
	 	printf("\n\t you have deposit rs.%d and ur new balance %f",amount,balance);
	 	amount=1;
	 	break;
	 }
	 
	 else if(opt==3)
	 {
	 	printf("\n\tyour balance is %f",balance);
	 	break;
	 }
	 
	 else
	 {
	    Beep(700,2500);
	 	printf("\n\t************* INVALID OPTION ***************\n\n");
	 }
	
  }
  return 0;
}
