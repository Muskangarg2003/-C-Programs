//to compare two strings using library function strcmp()
//strcmp(s1,s2) used to compare two string s1 and s2......this funnction find the diff of ascii values of character.....it compare the asci value 
//of every charcater up to which diff is other than 0 ...for ex abctjj and abcski... so it compare the ascii value of s and k

#include<stdio.h>
#include<string.h>
main()
{
	char s1[18],s2[18];
	printf("enter the string 1:");
	gets(s1);
	printf("enter the second string:");
	gets(s2);

	if(strcmp(s1,s2)==0)
	{
		printf("strings '%s' is eual to srtring '%s'",s1,s2);
	}
	else if(strcmp(s1,s2)>0)
	{
		printf("strings '%s' is greater than  srtring '%s'",s1,s2);
	}
	else
	
	{
		printf("strings '%s' is less than srtring '%s'",s1,s2);
	}
	return 0;
}
