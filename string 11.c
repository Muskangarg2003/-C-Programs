//to convert a given string into lowercase without library function
#include<stdio.h>
void str_lowercase(char []);
main()
{
	char str[13];
	printf("enter a string");
	gets(str);
	str_lowercase(str);
	printf("string in lowercase=%s",str);
	return 0;
}
	void str_lowercase(char s[])
	{
		int i;
		for(i=0;s[i]!=0;i++)
			if(s[i]>=65&&s[i]<=90)//ascii value of capital letters lie between 65 to 90....
	               s[i]=s[i]+32; //here we add 32 in ascii value bcs ascii value of lowercase letter is 32 greater than uppercase letters
	}

