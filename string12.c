//to convert a given string into uppercase without library function
#include<stdio.h>
void str_uppercase(char []);
main()
{
	char str[13];
	printf("enter a string");
	gets(str);
	str_uppercase(str);
	printf("string in uppercase=%s",str);
	return 0;
}
	void str_uppercase(char s[])
	{
		int i;
		for(i=0;s[i]!=0;i++)
			if(s[i]>=97&&s[i]<=122)//ascii value of capital letters lie between 97 to 122....
	               s[i]=s[i]-32; //here we add 32 in ascii value bcs ascii value of uppercase letter is 32 lower than lowercase letters
	}

