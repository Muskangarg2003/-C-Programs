#include<stdio.h>
void str_rev(char []);
main()
{
	char str[81];
	printf("enter the string");
	gets(str);
	str_rev(str);
	printf("string after reversing=%s",str);
	return 0; 
}
void str_rev(char s1[])
{
	char s2[81];
	int i,j,count=0;
	for(i=0; s1[i]!='\0';i++)
	{
		++count;
		s2[i]=s1[i];
	}
	for(i=count-1,j=0;i>=0;i--,j++)
	 s1[j]=s2[i];
	 s1[j]='\0';
}
