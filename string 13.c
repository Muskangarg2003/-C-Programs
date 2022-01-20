//to reverse a given string using strrev(a);
#include<stdio.h>
#include<string.h>
main()
{
	char a[22];
	printf("enter a string");
	gets(a);
	strrev(a);
	printf("\nstring after reversing=%s",a);
	return 0;
}
