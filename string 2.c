//find length using function not library function
#include<stdio.h>
#include<conio.h>
int str_length(char []);//function declaration 
main()
{
	char str[13];//in characterr define a string
	int k;//k tells the length of string
	printf("entr a string of character lss than or equal to 12");
	gets(str);
	k=str_length(str);//function call ...here input a string
	printf("length of string=%s=%d",str,k);	
	return 0;
}
int str_length(char s[])//value of string str in string s
{
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	return(i);
}
