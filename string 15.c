#include<stdio.h>
#include<string.h>
main()
{
	char str[20],c;
	int i,v=0,co=0,digit=0,space=0,other=0;
	printf("enter the sring\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c=toupper(str[i]);
		if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		 ++v;
		else if(c>='A'&&c<='Z') 
		 ++co;
		else if(c>='0'&&c<='9')
		 ++digit;
		else if(c==' '||c=='\t')  
		++space;
		else
		 ++other;
	}
	printf("in the string %s",str);
	printf("\n count of vowels=%d",v);
	printf("\n count of consonants=%d",co);
	printf("\n count of digits=%d",digit);
	printf("\n count of spaces=%d",space);
	printf("\n count of others=%d",other);
	return 0;
}
