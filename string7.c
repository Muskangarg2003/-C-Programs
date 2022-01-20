//strcmpi(s1,s2)...used two compare two strings  but ignores case diff...for examples here H and H are treated as simlar
#include<stdio.h>
#include<string.h>
main()
{
	char a[13],b[13];
	gets(a);
	gets(b);
	if(strcmpi(a,b)==0)
	     printf("strings are equal\n");
	else
	     printf("not equal");     
	     
	     return 0;
	
}
