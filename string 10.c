//to convert uppercase into lowercase in strings and vice versa
#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("enter a string");
	gets(s);
	strlwr(s); //used to convert uppercase into lowercase
	printf("after converting string is=%s",s);
	strupr(s);// used to convert lowercase o uppercase
	printf("after converting string is=%s",s);

	return 0;
}
