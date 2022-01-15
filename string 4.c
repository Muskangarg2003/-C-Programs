//to copy a string without using library function
#include<stdio.h>
void str_copy(char [],char []);//function protptype //we make a function name as str_copy
main()
{
	char str1[20],str2[20];//we declare two structure
	printf("enter a string 1:");
	gets(str1);//to scan a string1
	printf("enter  a string to be copied in string 1:");
	gets(str2);
	str_copy(str1,str2);//function call
	printf("string after copying:%s",str1);
	return 0;
}
void str_copy(char s1[],char s2[])//function header//passing the value of str1 and str2 in  s1 and s2
{
	int i;
	for(i=0;s2[i]!='\0';i++)//copy until end of s2 is reached
	{
	s1[i]=s2[i];
}

	s1[i]='\0';
	
}
  
	
	
